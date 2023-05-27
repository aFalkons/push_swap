/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: afalconi <afalconi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/22 05:48:02 by afalconi          #+#    #+#             */
/*   Updated: 2023/05/27 02:58:15 by afalconi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../moves.h"

void	pa(t_pushsw	*ps, int f)
{
	t_moves *temp;

	if (ps->ska == NULL)
		return;
	if (ps->skb == NULL)
	{
		ps->skb = ps->ska;
		ps->ska = ps->ska->next;
		ps->ska->prev = NULL;
		ps->skb->next = NULL;
	}
	else
	{
		temp = ps->skb;
		ps->skb->prev = ps->ska;
		ps->skb = ps->skb->prev;
		ps->ska = ps->ska->next;
		ps->ska->prev = NULL;
		ps->skb->next = temp;
	}
	ps->size_b ++;
	ps->size_a --;
	if (f == 0)
		write(1, "pa\n", 3);
}

void	pb(t_pushsw	*ps, int f)
{
	t_moves *temp;

	if (ps->skb == NULL)
		return;
	if (ps->ska == NULL)
	{
		ps->ska = ps->skb;
		ps->skb = ps->skb->next;
		ps->skb->prev = NULL;
		ps->ska->next = NULL;
	}
	else
	{
		temp = ps->ska;
		ps->ska->prev = ps->skb;
		ps->ska = ps->ska->prev;
		ps->skb = ps->skb->next;
		ps->skb->prev = NULL;
		ps->ska->next = temp;
	}
	ps->size_a ++;
	ps->size_b --;
	if (f == 0)
		write(1, "pb\n", 3);
}
