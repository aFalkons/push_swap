/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   reverse.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: afalconi <afalconi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/22 05:48:00 by afalconi          #+#    #+#             */
/*   Updated: 2023/05/22 07:39:43 by afalconi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	rra(t_ps *ps)
{
	int	i;
	int	x;
	int	cont;

	i = 0;
	while(i++ < ps->ntot)
	{
		cont = -1;
		x = ps->stcka[0];
		while(++cont < ps->ntot)
			ps->stcka[cont] = ps->stcka[cont + 1];
		ps->stcka[cont] = x;
	}
	write(1, "rra\n", 4);
}
void	rrb(t_ps *ps)
{
	int	i;
	int	x;
	int	cont;

	i = 0;
	while(i++ < ps->ntot)
	{
		cont = -1;
		x = ps->stckb[0];
		while(++cont < ps->ntot)
			ps->stckb[cont] = ps->stckb[cont + 1];
		ps->stckb[cont] = x;
	}
	write(1, "rrb\n", 4);
}

void	rrr(t_ps *ps)
{
	int	i;
	int	x;
	int	cont;

	i = 0;
	while(i++ < ps->ntot)
	{
		cont = -1;
		x = ps->stcka[0];
		while(++cont < ps->ntot)
			ps->stcka[cont] = ps->stcka[cont + 1];
		ps->stcka[cont] = x;
	}
	i = 0;
	while(i++ < ps->ntot)
	{
		cont = -1;
		x = ps->stckb[0];
		while(++cont < ps->ntot)
			ps->stckb[cont] = ps->stckb[cont + 1];
		ps->stckb[cont] = x;
	}
	write(1, "rrr\n", 4);
}
