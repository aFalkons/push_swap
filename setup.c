/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   setup.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: afalconi <afalconi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/24 21:04:57 by afalconi          #+#    #+#             */
/*   Updated: 2023/05/26 20:56:19 by afalconi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	setup(t_pushsw *ps, int ac, char **av)
{
	t_moves *temp;
	int i;

	if (ac < 4)
		ft_exit("Error\nbad input\n", NULL);
	i = 1;
	ps->size_a = ac - 1;
	ps->size_b = 0;
	ps->mov = ft_malloc(sizeof(t_moves));
	ps->mov->prev = NULL;
	ps->mov->next = NULL;
	ps->mov->n = ft_atol(av[1], ps);
	while (av[++i])
	{
		temp = ps->mov;
		ps->mov->next = ft_malloc(sizeof(t_moves));
		ps->mov = ps->mov->next;
		ps->mov->prev = temp;
		ps->mov->next = NULL;
		ps->mov->n = ft_atol(av[i], ps);
	}
	while (ps->mov->prev)
		ps->mov = ps->mov->prev;
}
