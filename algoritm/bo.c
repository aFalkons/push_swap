/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   bo.c                                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: afalconi <afalconi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/27 08:14:38 by afalconi          #+#    #+#             */
/*   Updated: 2023/05/29 14:25:53 by afalconi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

void	fristswap(t_pushsw *ps)
{
	int i;

	i = -3;
	while (++i <= ps->size_a)
		pa(ps, 0);
	sort3(ps);
	puttop(ps);
}

void	sort3(t_pushsw *ps)
{
	if (ps->ska->n > ps->ska->next->n)
		sa(ps, 0);
	if (ps->ska->next->n > ps->ska->next->next->n)
	{
		sa(ps, 0);
		ra(ps, 0);
	}
	if (ps->ska->n > ps->ska->next->n)
		sa(ps, 0);
}

void	puttop(t_pushsw *ps)
{
	int n;
	int cont;
	int pos;
	int kunk;

	n = ps->ska->n;
	cont = 1;
	pos = 0;
	kunk = 0;
	while (ps->skb->next)
	{
		if (ps->skb->n < n && ps->skb->n > kunk)
		{
			kunk = ps->skb->n;
			pos =  cont;
		}
		cont ++;
		ps->skb = ps->skb->next;
	}
	if (ps->skb->n < n && kunk > n)
	{
		kunk = ps->skb->n;
		pos =  cont;
	}
	while(ps->skb->prev)
		ps->skb = ps->skb->prev;
}
