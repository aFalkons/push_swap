/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   inizialsort.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: afalconi <afalconi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/03 21:25:16 by afalconi          #+#    #+#             */
/*   Updated: 2023/06/13 20:01:23 by afalconi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

void	fristswap(t_pushsw *ps)
{
	int	temp;

	temp = ps->size_a;
	mid(ps);
	maxemin(ps);
	while (ps->ska->prev)
		ps->ska = ps->ska->prev;
	if (ps->size_a == 5)
	{
		sort5(ps);
		maxemin(ps);
		return ;
	}
	while (ps->size_a != 3)
	{
		if (ps->ska->n != ps->maxa && ps->ska->n != ps->mina)
		{
			pb(ps, 0);
			if (ps->skb->n > ps->mid && ps->size_b != 1 && temp != 5)
				rb(ps, 0);
		}
		else
			ra(ps, 0);
	}
	sort3(ps);
}

void	ckrxrrx(t_pushsw *ps, int size, int ret, int f)
{
	if (f == 0)
	{
		if (ret > size / 2)
		{
			ps->contm.raorrra = 2;
			ps->contm.movesa = size - ret;
		}
		else
		{
			ps->contm.raorrra = 1;
			ps->contm.movesa = ret;
		}
		return ;
	}
	if (ret > size / 2)
	{
		ps->contm.movesb = size - ret;
		ps->contm.rborrrb = 2;
	}
	else
	{
		ps->contm.movesb = ret;
		ps->contm.rborrrb = 1;
	}
}

void	sort3(t_pushsw *ps)
{
	if (ps->ska->n == ps->maxa && ps->ska->next->next->n == ps->mina)
	{
		sa(ps, 0);
		rra(ps, 0);
	}
	if (ps->ska->n == ps->maxa && ps->ska->next->n == ps->mina)
		ra(ps, 0);
	if (ps->ska->n == ps->mina && ps->ska->next->n == ps->maxa)
	{
		sa(ps, 0);
		ra(ps, 0);
	}
	if (ps->ska->next->n == ps->mina && ps->ska->next->next->n == ps->maxa)
		sa(ps, 0);
	if (ps->ska->next->n == ps->maxa && ps->ska->next->next->n == ps->mina)
		rra(ps, 0);
}

void	ckpusha(t_pushsw *ps)
{
	int	cont;
	int	ret;

	cont = 0;
	ret = 0;
	inizmy(ps);
	if (ps->skb->n < ps->ska->n)
		ret = cont;
	while (ps->ska->next)
	{
		cont ++;
		if (ps->skb->n > ps->ska->n && ps->skb->n < ps->ska->next->n)
		{
			ret = cont;
			break ;
		}
		ps->ska = ps->ska->next;
	}
	if (ps->skb->n < ps->ska->n)
		ret = cont;
	while (ps->ska->prev)
		ps->ska = ps->ska->prev;
	ckrxrrx(ps, ps->size_a, ret, 0);
}

void	puttop(t_pushsw *ps)
{
	int	cont;
	int	mossom;
	int	vmossom;

	mossom = 0;
	cont = -1;
	while (++cont < ps->size_b)
	{
		ckpusha(ps);
		ckrxrrx(ps, ps->size_b, cont, 1);
		mossom = ps->contm.movesa + ps->contm.movesb;
		if (mossom <= vmossom || (cont == 0))
		{
			ps->contm.vmovesa = ps->contm.movesa;
			ps->contm.vmovesb = ps->contm.movesb;
			ps->contm.vraorrra = ps->contm.raorrra;
			ps->contm.vrborrrb = ps->contm.rborrrb;
			vmossom = mossom;
		}
		if (ps->skb->next)
			ps->skb = ps->skb->next;
	}
	while (ps->skb->prev)
		ps->skb = ps->skb->prev;
}
