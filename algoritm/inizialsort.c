/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   inizialsort.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: afalconi <afalconi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/03 21:25:16 by afalconi          #+#    #+#             */
/*   Updated: 2023/06/05 19:59:51 by afalconi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

void	fristswap(t_pushsw *ps)
{
	ps->maxb = 0;
	ps->minb = 2147483647;
	maxemin(ps);
	while (ps->size_a != 3)
	{
		if(ps->ska->n != ps->maxa && ps->ska->n != ps->mina)
		{
			if (ps->ska->n < ps->minb)
				ps->minb = ps->ska->n;
			if (ps->ska->n > ps->maxb)
				ps->maxb = ps->ska->n;
			pb(ps, 0);
		}
		else
			ra(ps, 0);
	}
	sort3(ps);
}

void	inizmy(t_pushsw *ps)
{
	ps->contm.movesa = 0;
	ps->contm.movesb = 0;
	ps->contm.raorrra = 0;
	ps->contm.rborrrb = 0;
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

void	ckpusha(t_pushsw *ps)
{
	int cont;
	int ret;

	cont = 0;
	ret = 0;
	inizmy(ps);
	while (ps->ska->next)
	{
		cont ++;
		if (ps->skb->n > ps->ska->n && ps->skb->n < ps->ska->next->n)
			ret = cont;
		ps->ska = ps->ska->next;
	}
	if (ps->skb->n < ps->ska->n)
		ret = cont;
	while(ps->ska->prev)
		ps->ska = ps->ska->prev;
	if (ret > ps->size_a / 2)
	{
		ps->contm.raorrra = 2;
		ps->contm.movesa= ps->size_a - ret;
	}
	else
	{
		ps->contm.raorrra = 1;
		ps->contm.movesa = ret;
	}
}

void	puttop(t_pushsw *ps)
{
	int cont;
	int	mossom;
	int	vmossom;

	mossom = 0;
	vmossom = 0;
	cont = ps->size_b;
	while (cont > 0)
	{
		ckpusha(ps);
		if (cont > ps->size_b / 2)
		{
			ps->contm.movesb = ps->size_b - cont;
			ps->contm.rborrrb = 2;
		}
		else
		{
			ps->contm.movesb = cont;
			ps->contm.rborrrb = 1;
		}
		mossom = ps->contm.movesa + ps->contm.movesb;
		if (mossom < vmossom || (cont == ps->size_b))
		{
			ps->contm.vmovesa = ps->contm.movesa;
			ps->contm.vmovesb = ps->contm.movesb;
			ps->contm.vraorrra = ps->contm.raorrra;
			ps->contm.vrborrrb = ps->contm.rborrrb;
			ps->contm.n = ps->skb->n;
			vmossom = mossom;
		}
		cont --;
		if(cont > 1)
			ps->skb = ps->skb->next;
	}
	while(ps->skb->prev)
		ps->skb = ps->skb->prev;
}
