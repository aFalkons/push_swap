/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   swap.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: afalconi <afalconi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/22 05:48:07 by afalconi          #+#    #+#             */
/*   Updated: 2023/05/24 23:14:11 by afalconi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../moves.h"

void	sa(t_moves *ps, int f)
{
	int	x;

	if	(ps->stcka[0] && ps->stcka[1])
	{
		x = ps->stcka[0];
		ps->stcka[1] = ps->stcka[0];
		ps->stcka[1] = x;
	}
	if (f == 1)
		write(1, "sa\n", 3);
}
void	sb(t_moves *ps, int f)
{
	int	x;

	if	(ps->stckb[0] && ps->stckb[1])
	{
		x = ps->stckb[0];
		ps->stckb[1] = ps->stckb[0];
		ps->stckb[1] = x;
	}
	if (f == 1)
		write(1, "sb\n", 3);
}
void	ss(t_moves *ps, int f)
{
	sa(ps, 0);
	sb(ps, 0);
	if (f == 1)
		write(1, "ss\n", 3);
}
