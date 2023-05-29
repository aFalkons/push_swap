/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rotate.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: afalconi <afalconi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/22 05:48:09 by afalconi          #+#    #+#             */
/*   Updated: 2023/05/28 19:54:45 by afalconi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../moves.h"

void	ra(t_pushsw *ps, int f)
{
	t_moves *temp;

	temp = ps->ska;

	ps->ska = ps->ska->next;
	ps->ska->prev = NULL;
	while (ps->ska->next)
		ps->ska = ps->ska->next;
	temp->prev = ps->ska;
	temp->next = NULL;
	ps->ska->next = temp;
	while (ps->ska->prev)
		ps->ska = ps->ska->prev;
	if (f == 0)
		write(1, "ra\n", 3);
}
void	rb(t_pushsw *ps, int f)
{
	t_moves *temp;

	temp = ps->skb;
	ps->skb = ps->skb->next;
	ps->skb->prev = NULL;
	while (ps->skb->next)
		ps->skb = ps->skb->next;
	temp->prev = ps->skb;
	ps->skb->next = temp;
	temp = ps->skb;
	ps->skb = ps->skb->next;
	ps->skb->prev = temp;
	ps->skb->next = NULL;
	while (ps->skb->prev)
		ps->skb = ps->skb->prev;
	if (f == 0)
		write(1, "rb\n", 3);
}

void	rr(t_pushsw *ps, int f)
{
	ra(ps, 1);
	rb(ps, 1);
	if (f == 0)
		write(1, "rr\n", 3);
}
