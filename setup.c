/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   setup.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: afalconi <afalconi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/24 21:04:57 by afalconi          #+#    #+#             */
/*   Updated: 2023/05/29 18:58:35 by afalconi         ###   ########.fr       */
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
	ps->skb = NULL;
	ps->size_a = ac - 1;
	ps->size_b = 0;
	ps->ska = ft_malloc(sizeof(t_moves));
	ps->ska->prev = NULL;
	ps->ska->n = ft_atol(av[1], ps);
	while (av[++i])
	{
		temp = ps->ska;
		ps->ska->next = ft_malloc(sizeof(t_moves));
		ps->ska = ps->ska->next;
		ps->ska->prev = temp;
		ps->ska->n = ft_atol(av[i], ps);
	}
	ps->ska->next = NULL;
	while (ps->ska->prev)
	{
		ps->ska = ps->ska->prev;
	}
}
