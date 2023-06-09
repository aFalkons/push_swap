/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   realswap.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: afalconi <afalconi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/03 21:37:23 by afalconi          #+#    #+#             */
/*   Updated: 2023/06/09 01:36:25 by afalconi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

void	exeputtop(t_pushsw *ps)
{
	//printf("mosse su a   : %d\n", ps->contm.vmovesa);
	//printf("mosse su b   : %d\n", ps->contm.vmovesb);
	//printf("tipo mossa a : %d\n", ps->contm.vrborrrb);
	//printf("tipo mossa b : %d\n", ps->contm.vraorrra);
	if(ps->contm.vmovesa == ps->size_a)
		ps->contm.vmovesa = 0;
	if(ps->contm.vmovesb == ps->size_b)
		ps->contm.vmovesb = 0;
	if (ps->contm.vraorrra == 1 && ps->contm.vrborrrb == 1)
		exedobemoves(ps, 1, &ps->contm.vmovesa, &ps->contm.vmovesb);
	if (ps->contm.vraorrra == 2 && ps->contm.vrborrrb == 2)
		exedobemoves(ps, 0, &ps->contm.vmovesa, &ps->contm.vmovesb);
	if (ps->contm.vraorrra == 1)
		exemos(0, ps->contm.vmovesa, ps);
	else if(ps->contm.vraorrra == 2)
		exemos(1, ps->contm.vmovesa, ps);
	if (ps->contm.vrborrrb == 1)
		exemos(2, ps->contm.vmovesb, ps);
	else if(ps->contm.vrborrrb == 2)
		exemos(3, ps->contm.vmovesb, ps);
	pa(ps, 0);
}

void	exedobemoves(t_pushsw *ps, int f, int *cont1, int *cont2)
{
	//printf("diocane\n");
	if (*cont1 == 0 || *cont2 == 0)
		return ;
	while(1)
	{
		if (f == 0)
			rrr(ps, 0);
		else
			rr(ps, 0);
		(*cont1) --;
		(*cont2) --;
		//printf("GG\n");
		if ((*cont2) == 0 || (*cont1) == 0)
			return;
	}
}

void	exemos(int f, int cont, t_pushsw *ps)
{
	while (cont > 0)
	{
		if (f == 0)
			ra(ps, 0);
		else if(f == 1)
			rra(ps , 0);
		else if(f == 2)
			rb(ps ,0);
		else if(f == 3)
			rrb(ps, 0);
		cont --;
	}
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
