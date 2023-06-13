/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   utils.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: afalconi <afalconi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/22 05:58:08 by afalconi          #+#    #+#             */
/*   Updated: 2023/06/13 19:52:26 by afalconi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	ft_atol(char *str, t_pushsw *ps)
{
	int				seg;
	long long		som;
	int				i;

	seg = 1;
	som = 0;
	i = 0;
	while ((str[i] >= 9 && str[i] <= 13) || str[i] == 32)
		i++;
	if (str[i] == '-' || str[i] == '+')
	{
		seg = ',' - str[i];
		i++;
	}
	while (str[i])
	{
		if (str[i] >= 48 && str[i] <= 57)
			som = (som * 10) + str[i] - 48;
		else
			break ;
		i++;
	}
	if (som > INT_MAX || som < INT_MIN)
		ft_exit("Error\n", ps, 1);
	return (som * seg);
}

void	ft_exit(char *str, t_pushsw *ps, int f)
{
	if (str != NULL)
		write(2, str, ft_strlen(str));
	if (ps != NULL)
		ft_free(ps);
	exit(f);
}

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i])
		i++;
	return (i);
}

void	*ft_malloc(int bytes)
{
	void	*var;

	var = malloc(bytes);
	if (!var)
		exit(0);
	return (var);
}

void	ft_free(t_pushsw *ps)
{
	while (ps->ska->next)
		ps->ska = ps->ska->next;
	if (ps->ska->prev != NULL)
	{
		while (ps->ska->next)
			ps->ska = ps->ska->next;
		ps->ska = ps->ska->prev;
		while (ps->ska->prev)
		{
			free(ps->ska->next);
			ps->ska->next = NULL;
			ps->ska = ps->ska->prev;
		}
		free(ps->ska->next);
		ps->ska->next = NULL;
	}
	free(ps->ska);
	ps->ska = NULL;
}
