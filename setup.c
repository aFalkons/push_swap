/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   setup.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: afalconi <afalconi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/24 21:04:57 by afalconi          #+#    #+#             */
/*   Updated: 2023/05/25 23:18:35 by afalconi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	setup(t_pushsw *ps, int ac, char **av)
{
	t_moves *temp;
	int i;

	if (ac < 4)
		ft_exit("Error\nbad input\n", 0);
	i = 0;
	ps->size_a = ac - 1;
	ps->size_b = 0;
	ps->mov = malloc(sizeof(t_moves));
	ps->mov->n = ft_atol(av[1]);
	ps->mov->prev = NULL;
	while (av[++i])
	{
		temp = ps->mov;
		ps->mov->next = malloc(sizeof(t_moves));
		ps->mov = ps->mov->next;
		ps->mov->n = ft_atol(av[i]);
		ps->mov->prev = temp;
	}
}
