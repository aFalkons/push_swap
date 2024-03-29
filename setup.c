/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   setup.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: afalconi <afalconi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/24 21:04:57 by afalconi          #+#    #+#             */
/*   Updated: 2023/06/19 11:55:10 by afalconi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	setup(t_pushsw *ps, int ac, char **av)
{
	t_moves	*temp;
	char	**ninchar;
	int		i;
	int		f;

	ninchar = ckinput(ps, ac, av, &f);
	i = 0;
	ps->ska = ft_malloc(sizeof(t_moves));
	ps->ska->prev = NULL;
	ps->ska->next = NULL;
	ps->ska->n = ft_atol(ninchar[i], ps);
	while (ninchar[++i])
	{
		temp = ps->ska;
		ps->ska->next = ft_malloc(sizeof(t_moves));
		ps->ska = ps->ska->next;
		ps->ska->prev = temp;
		ps->ska->next = NULL;
		ps->ska->n = ft_atol(ninchar[i], ps);
	}
	ps->ska->next = NULL;
	while (ps->ska->prev)
		ps->ska = ps->ska->prev;
	if (f == 1)
		freedellacosa(ninchar);
}

char	**ckinput(t_pushsw *ps, int ac, char **av, int *f)
{
	char	**inputarg;
	int		i;
	int		cont;

	i = 0;
	cont = 0;
	if (ac == 2)
	{
		inputarg = ft_split(av[1], ' ');
		while (inputarg[i])
			i ++;
		ps->size_a = i;
		*f = 1;
	}
	else
	{
		inputarg = &av[1];
		ps->size_a = ac - 1;
		*f = 0;
	}
	i = -1;
	ckinput2(inputarg, ps, *f);
	return (inputarg);
}

void	ckinput2(char **av, t_pushsw *ps, int f)
{
	int	i;
	int	j;

	i = 0;
	j = 0;
	while (av[i])
	{
		while (av[i][j])
		{
			if (!(av[i][j] >= 48 && av[i][j] <= 57))
			{
				if (!(av[i][j] == '-' && av[i][j + 1] > 48
					&& av[i][j + 1] < 57 && j == 0))
				{
					if (f == 1)
						freedellacosa(av);
					ft_exit("Error\n", NULL, 1);
				}
			}
			j ++;
		}
		j = 0;
		i ++;
	}
}

void	freedellacosa(char	**str)
{
	int	i;

	i = 0;
	while (str[i])
	{
		free(str[i]);
		i++;
	}
	free(str);
}
