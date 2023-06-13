/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   breverse.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: afalconi <afalconi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/22 05:48:00 by afalconi          #+#    #+#             */
/*   Updated: 2023/06/13 21:53:18 by afalconi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../checkerh.h"

void	rra(t_ck *ps, int f)
{
	t_moves	*temp;

	if (ps->size_a >= 2)
	{
		while (ps->ska->next)
			ps->ska = ps->ska->next;
		temp = ps->ska;
		ps->ska->prev->next = NULL;
		while (ps->ska->prev)
			ps->ska = ps->ska->prev;
		temp->prev = NULL;
		temp->next = ps->ska;
		ps->ska->prev = temp;
		ps->ska = temp;
		if (f == 0)
			write(1, "rra\n", 4);
	}
}

void	rrb(t_ck *ps, int f)
{
	t_moves	*temp;

	if (ps->size_b >= 2)
	{
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
		ps->skb = temp;
		if (f == 0)
			write(1, "rrb\n", 4);
	}
}

void	rrr(t_ck *ps, int f)
{
	rra(ps, 1);
	rrb(ps, 1);
	if (f == 0)
		write(1, "rrr\n", 4);
}
