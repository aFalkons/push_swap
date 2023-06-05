/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   realswap.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: afalconi <afalconi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/03 21:37:23 by afalconi          #+#    #+#             */
/*   Updated: 2023/06/05 18:19:03 by afalconi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

void	exeputtop(t_pushsw *ps)
{
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

void	exemos(int f, int cont, t_pushsw *ps)
{
	// if (cont == -1)
	// {
	// 	while(ps->contm.vmovesa > 0 || ps->contm.vmovesb > 0)
	// 	{
	// 		rr(ps, 0);
	// 		ps->contm.vmovesa --;
	// 		ps->contm.vmovesb --;
	// 	}
	// }
	// if (cont == -2)
	// {
	// 	while(ps->contm.vmovesa > 0 || ps->contm.vmovesb > 0)
	// 	{
	// 		rrr(ps, 0);
	// 		ps->contm.vmovesa --;
	// 		ps->contm.vmovesb --;
	// 	}
	// }
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
