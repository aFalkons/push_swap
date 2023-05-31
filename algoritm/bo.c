/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   bo.c                                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: afalconi <afalconi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/27 08:14:38 by afalconi          #+#    #+#             */
/*   Updated: 2023/05/30 20:06:19 by afalconi         ###   ########.fr       */
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
			pa(ps, 0);
		}
		else
			ra(ps, 0);
	}
	sort3(ps);
	puttop(ps);
	// printf("grandezza della stack %d\n", ps->size_a / 2);
	// printf("GG%d\n", cksort(ps));
}


void	maxemin(t_pushsw *ps)
{
	while (ps->ska->next)
		ps->ska = ps->ska->next;
	ps->maxa = ps->ska->n;
	ps->mina = ps->ska->n;
	while (ps->ska->prev)
	{
		if (ps->ska->n < ps->mina)
			ps->mina = ps->ska->n;
		if (ps->ska->n > ps->maxa)
			ps->maxa = ps->ska->n;
		ps->ska = ps->ska->prev;
	}
	if (ps->ska->n < ps->mina)
		ps->mina = ps->ska->n;
	if (ps->ska->n > ps->maxa)
		ps->maxa = ps->ska->n;
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

	n = 0;
	cont = 0;
	pos = 0;
	kunk = 2147483647;
	while (ps->skb->next)
	{
		pos = ckpusha(ps);
		cont ++;
		if (cont < ps->size_b / 2)
			pos = pos + cont;
		else
			pos = pos + ((ps->size_b - cont) + 1);
		if (cont == 1)
			kunk = pos;
		if (pos <= kunk)
		{
			if (cont < ps->size_b / 2)
				ps->mayrb = cont;
			else
				ps->mayrrb = ps->size_b - cont;
			if (ckpusha(ps) < 0)
				ps->mayrra = ckpusha(ps) * -1;
			else
				ps->mayra = ckpusha(ps);
			n = ps->skb->n;
			kunk = pos;
		}
		ps->skb = ps->skb->next;
	}
	pos = ckpusha(ps);
	cont ++;
	if (cont < ps->size_b / 2)
		pos = pos + cont;
	else
		pos = pos + ((ps->size_b - cont) + 1);
	if (pos <= kunk)
	{
		if (cont < ps->size_b / 2)
			ps->mayrb = cont;
		else
			ps->mayrrb = ps->size_b - cont;
		if (ckpusha(ps) < 0)
			ps->mayrra = ckpusha(ps) * -1;
		else
			ps->mayra = ckpusha(ps);
		n = ps->skb->n;
		kunk = pos;
	}
	while(ps->skb->prev)
		ps->skb = ps->skb->prev;
	printf("mayra  : %d\n", ps->mayra);
	printf("mayrra : %d\n", ps->mayrra);
	printf("mayrb  : %d\n", ps->mayrb);
	printf("mayrrb : %d\n", ps->mayrrb);
	printf("il numero : %d\n", n);
	printf("le mosse  : %d\n", kunk);

}

int		ckpusha(t_pushsw *ps)
{
	int cont;
	int ret;

	cont = 0;
	ret = 0;
	while (ps->ska->next)
	{
		cont ++;
		if (ps->skb->n > ps->ska->n && ps->skb->n < ps->ska->next->n)
			ret = cont;
		ps->ska = ps->ska->next;
	}
	while(ps->ska->prev)
		ps->ska = ps->ska->prev;
	if (ret > ps->size_a / 2)
		return(ps->size_a - ret);
	else
		return(ret);
	return(0);
}

int		cksort(t_pushsw *ps)
{
	t_moves	*copyb;
	t_moves	*copya;
	int		pos;
	int		cont;

	copyb = ps->skb;
	copya = ps->ska;
	cont = 1;
	pos = cont;
	while (copya->next)
	{
		cont ++;
		if(copya->n < copyb->n && copya->next->n > copyb->n)
			pos = cont;
		copya = copya->next;
	}
	if (copya->n < copyb->n)
	{
		printf("quo\n");
		return(1);
	}
	printf("-------%d\n", pos);
	if(pos > (ps->size_a / 2) + 1)
	{
		printf("qua\n");
		return((ps->size_a + 1) - pos);
	}
	printf("qui\n");
	return(pos);
}
