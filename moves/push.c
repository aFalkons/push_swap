/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: afalconi <afalconi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/22 05:48:02 by afalconi          #+#    #+#             */
/*   Updated: 2023/05/27 11:18:41 by afalconi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../moves.h"

void	sav_pa(t_pushsw *ps, int f)
{
	t_moves	*tmp;

	if (ps->ska == NULL)
	{
		return ;
	}
	tmp = ps->ska->next;
	if (ps->ska->next != NULL)
	{
		ps->ska->next->prev = NULL;
	}
	ps->ska->next = ps->skb;
	if (ps->skb != NULL)
	{
		ps->skb->prev = ps->ska;
	}
	ps->skb = ps->ska;
	ps->ska = tmp;
}

// void	pa(t_pushsw	*ps, int f)
// {
// 	t_moves *temp;

// 	if (ps->ska == NULL)
// 		return;
// 	if (ps->skb == NULL)
// 	{
// 		ps->skb = ps->ska;
// 		ps->ska = ps->ska->next;
// 		ps->ska->prev = NULL;
// 		ps->skb->next = NULL;
// 	}
// 	else if(ps->ska->next == NULL && ps->ska->prev == NULL)
// 	{
// 		temp = ps->skb;
// 		ps->skb->prev = ps->ska;
// 		ps->skb = ps->skb->prev;
// 		ps->skb->next = temp;
// 		ps->ska = NULL;
// 	}
// 	else
// 	{
// 		temp = ps->skb;
// 		ps->skb->prev = ps->ska;
// 		ps->skb = ps->skb->prev;
// 		ps->ska = ps->ska->next;
// 		ps->ska->prev = NULL;
// 		ps->skb->next = temp;
// 	}
// 	ps->size_b ++;
// 	ps->size_a --;
// 	if (f == 0)
// 		write(1, "pa\n", 3);
// }

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
	else if(ps->skb->next == NULL && ps->skb->prev == NULL)
	{
		temp = ps->skb;
		ps->ska->prev = ps->skb;
		ps->ska = ps->ska->prev;
		ps->ska->next = temp;
		ps->skb = NULL;
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
