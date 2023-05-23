/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   swap.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: afalconi <afalconi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/22 05:48:07 by afalconi          #+#    #+#             */
/*   Updated: 2023/05/22 07:39:11 by afalconi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	sa(t_ps *ps)
{
	int	x;

	if	(ps->stcka[0] && ps->stcka[1])
	{
		x = ps->stcka[0];
		ps->stcka[1] = ps->stcka[0];
		ps->stcka[1] = x;
	}
	write(1, "sa\n", 3);
}
void	sb(t_ps *ps)
{
	int	x;

	if	(ps->stckb[0] && ps->stckb[1])
	{
		x = ps->stckb[0];
		ps->stckb[1] = ps->stckb[0];
		ps->stckb[1] = x;
	}
	write(1, "sb\n", 3);
}
void	ss(t_ps *ps)
{
	int	x;
	int	y;

	if	(ps->stcka[0] && ps->stcka[1])
	{
		x = ps->stcka[0];
		ps->stcka[1] = ps->stcka[0];
		ps->stcka[1] = x;
		y = ps->stckb[0];
		ps->stckb[1] = ps->stckb[0];
		ps->stckb[1] = y;
	}
	write(1, "ss\n", 3);
}
