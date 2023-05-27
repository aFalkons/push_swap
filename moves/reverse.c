/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   reverse.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: afalconi <afalconi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/22 05:48:00 by afalconi          #+#    #+#             */
/*   Updated: 2023/05/27 02:41:35 by afalconi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../moves.h"

void	rra(t_pushsw *ps, int f)
{
	int i;

	i = 0;
	while(++i < ps->size_a)
		ra(ps, 1);
	if (f == 0)
		write(1, "rra\n", 4);
}
void	rrb(t_pushsw *ps, int f)
{
	int i;

	i = 0;
	while(++i < ps->size_a)
		rb(ps, 1);
	if (f == 0)
		write(1, "rrb\n", 4);
}

void	rrr(t_pushsw *ps, int f)
{
	rra(ps, 0);
	rrb(ps, 0);
	if (f == 0)
		write(1, "rrr\n", 4);
}
