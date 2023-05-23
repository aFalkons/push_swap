/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   reverse.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: afalconi <afalconi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/22 05:48:00 by afalconi          #+#    #+#             */
/*   Updated: 2023/05/23 16:43:29 by afalconi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "moves.h"

void	rra(t_ps *ps, int f)
{
	int	i;
	int	x;
	int	cont;

	i = 0;
	while(i++ < ps->ntot)
		ra(ps, 0);
	if (f == 1)
		write(1, "rra\n", 4);
}
void	rrb(t_ps *ps, int f)
{
	int	i;
	int	x;
	int	cont;

	i = 0;
	while(i++ < ps->ntot)
		rb(ps, 0);
	if (f == 1)
		write(1, "rrb\n", 4);
}

void	rrr(t_ps *ps, int f)
{
	rra(ps, 0);
	rrb(ps, 0);
	if (f == 1)
		write(1, "rrr\n", 4);
}
