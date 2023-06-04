/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   reorder.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: afalconi <afalconi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/04 21:02:53 by afalconi          #+#    #+#             */
/*   Updated: 2023/06/04 21:12:44 by afalconi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

void	reorder(t_pushsw *ps)
{
	int i;

	i = 0;
	while (ps->ska->prev)
		ps->ska = ps->ska->prev;
	while (ps->mina != ps->ska->n)
	{
		i++;
		ps->ska = ps->ska->next;
	}
	while (ps->ska->prev)
		ps->ska = ps->ska->prev;
	if (i > ps->size_a / 2)
	{
		i = ps->size_a - i;
		while(i != 0)
		{
			rra(ps, 0);
			i --;
		}
	}
	else
	{
		while(i != 0)
		{
			ra(ps, 0);
			i --;
		}
	}
}
