/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   reverse.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: afalconi <afalconi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/22 05:48:00 by afalconi          #+#    #+#             */
/*   Updated: 2023/06/05 19:45:29 by afalconi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../moves.h"

void	rra(t_pushsw *ps, int f)
{
	t_moves *temp;

	while (ps->ska->next)
		ps->ska = ps->ska->next;
	temp = ps->ska;
	ps->ska->prev->next = NULL;
	while (ps->ska->prev)
		ps->ska = ps->ska->prev;
	temp->prev = NULL;
	temp->next = ps->ska;
	ps->ska->prev = temp;
	ps->ska = ps->ska->prev;
	if (f == 0)
		write(1, "rra\n", 4);
}
void	rrb(t_pushsw *ps, int f)
{
	t_moves *temp;

	while (ps->skb->next)
		ps->skb = ps->skb->next;
	temp = ps->skb;
	ps->skb->prev->next = NULL;
	while (ps->skb->prev)
		ps->skb = ps->skb->prev;
	temp->prev = NULL;
	temp->next = ps->skb;
	ps->skb->prev = temp;
	ps->skb = ps->skb->prev;
	if (f == 0)
		write(1, "rrb\n", 4);
}

void	rrr(t_pushsw *ps, int f)
{
	rra(ps, 0);
	rrb(ps, 0);
	if (f == 0)
		write(1, "rrr\n", 4);
}
