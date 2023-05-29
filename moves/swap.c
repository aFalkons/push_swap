/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   swap.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: afalconi <afalconi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/22 05:48:07 by afalconi          #+#    #+#             */
/*   Updated: 2023/05/28 19:55:22 by afalconi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../moves.h"

void	sa(t_pushsw *ps, int f)
{
	t_moves *temp;

	if (ps->ska == NULL || ps->ska->next == NULL)
		return;
	temp = ps->ska;
	ps->ska = ps->ska->next;
	ps->ska->prev = NULL;
	temp->prev = ps->ska;
	temp->next = ps->ska->next;
	ps->ska->next->prev = temp;
	ps->ska->next = temp;
	if (f == 0)
		write(1, "sa\n", 3);
}
void	sb(t_pushsw *ps, int f)
{
	t_moves *temp;

	if (ps->skb == NULL || ps->skb->next == NULL)
		return;
	temp = ps->skb;
	ps->skb = ps->skb->next;
	ps->skb->prev = NULL;
	temp->prev = ps->skb;
	temp->next = ps->skb->next;
	ps->skb->next->prev = temp;
	ps->skb->next = temp;
	if (f == 0)
		write(1, "sb\n", 3);
}
void	ss(t_pushsw *ps, int f)
{
	if ((ps->ska == NULL && ps->ska->next == NULL)
		|| (ps->skb == NULL && ps->skb->next == NULL))
		return;
	sa(ps, 1);
	sb(ps, 1);
	if (f == 0)
		write(1, "ss\n", 3);
}
