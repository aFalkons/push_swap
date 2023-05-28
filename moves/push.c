/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: afalconi <afalconi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/22 05:48:02 by afalconi          #+#    #+#             */
/*   Updated: 2023/05/28 17:20:59 by afalconi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../moves.h"

void	pa(t_pushsw *ps, int f)
{
	t_moves	*tmp;

	if (ps->ska == NULL)
		return ;
	tmp = ps->ska->next;
	if (ps->ska->next != NULL)
		ps->ska->next->prev = NULL;
	ps->ska->next = ps->skb;
	if (ps->skb != NULL)
		ps->skb->prev = ps->ska;
	ps->skb = ps->ska;
	ps->ska = tmp;
 	ps->size_b ++;
 	ps->size_a --;
	if (f == 0)
		write(1, "pa\n", 3);
}

void	pb(t_pushsw	*ps, int f)
{
	t_moves	*tmp;

	if (ps->skb == NULL)
		return ;
	tmp = ps->skb->next;
	if (ps->skb->next != NULL)
		ps->skb->next->prev = NULL;
	ps->skb->next = ps->ska;
	if (ps->ska != NULL)
		ps->ska->prev = ps->skb;
	ps->ska = ps->skb;
	ps->skb = tmp;
 	ps->size_a ++;
 	ps->size_b --;
	if (f == 0)
		write(1, "pb\n", 3);
}
