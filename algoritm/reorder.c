/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   reorder.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: afalconi <afalconi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/04 21:02:53 by afalconi          #+#    #+#             */
/*   Updated: 2023/06/13 20:58:28 by afalconi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

void	reorder(t_pushsw *ps)
{
	int	i;

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
		i = ps->size_a - i + 1;
		while (-- i != 0)
			rra(ps, 0);
	}
	else
	{
		i++;
		while (-- i != 0)
			ra(ps, 0);
	}
}

void	mid(t_pushsw *ps)
{
	t_moves	*ck;
	int		cont;

	ck = ps->ska;
	cont = 0;
	while (ck->next)
	{
		mid2(ps, ck, cont);
		cont = 0;
		ck = ck->next;
	}
	mid2(ps, ck, cont);
}

void	mid2(t_pushsw *ps, t_moves *ck, int cont)
{
	t_moves	*ck2;

	ck2 = ps->ska;
	while (ck2->next)
	{
		if (ck2->n < ck->n)
			cont ++;
		ck2 = ck2->next;
	}
	if (ck2->n < ck->n)
		cont ++;
	if (cont == ps->size_a / 2)
		ps->mid = ck->n;
}

void	inizmy(t_pushsw *ps)
{
	ps->contm.movesa = 0;
	ps->contm.movesb = 0;
	ps->contm.raorrra = 0;
	ps->contm.rborrrb = 0;
}

void	sort5(t_pushsw *ps)
{
	if (ps->ska->next->next->next->n == ps->maxa)
		rra(ps, 0);
	if (ps->ska->next->next->next->next->n == ps->maxa)
		rra(ps, 0);
	if (ps->ska->next->next->n == ps->maxa)
		ra(ps, 0);
	if (ps->ska->next->n == ps->maxa)
		ra(ps, 0);
	pb(ps, 0);
	while (ps->ska->n != ps->mina)
		ra(ps, 0);
	pb(ps, 0);
	maxemin(ps);
	sort3(ps);
	pa(ps, 0);
	pa(ps, 0);
}
