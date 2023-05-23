/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rotate.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: afalconi <afalconi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/22 05:48:09 by afalconi          #+#    #+#             */
/*   Updated: 2023/05/23 16:43:42 by afalconi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "moves.h"

void	ra(t_ps *ps, int f)
{
	int	x;
	int	cont;

	cont = -1;
	x = ps->stcka[0];
	while(++cont < ps->ntot)
		ps->stcka[cont] = ps->stcka[cont + 1];
	ps->stcka[cont] = x;
	if (f == 1)
		write(1, "ra\n", 3);
}
void	rb(t_ps *ps, int f)
{
	int	x;
	int	cont;

	cont = -1;
	x = ps->stckb[0];
	while(++cont < ps->ntot)
		ps->stckb[cont] = ps->stckb[cont + 1];
	ps->stckb[cont] = x;
	if (f == 1)
		write(1, "rb\n", 3);
}

void	rr(t_ps *ps, int f)
{
	ra(ps, 0);
	rb(ps, 0);
	if (f == 1)
		write(1, "rr\n", 3);
}
