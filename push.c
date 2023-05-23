/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: afalconi <afalconi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/22 05:48:02 by afalconi          #+#    #+#             */
/*   Updated: 2023/05/22 07:39:26 by afalconi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	pa(t_ps	*ps)
{
	if (ps->stckb[0])
		ps->stcka[0] = ps->stckb[0];
	write(1, "pa\n", 3);
}
void	pb(t_ps	*ps)
{
	if (ps->stcka[0])
		ps->stckb[0] = ps->stcka[0];
	write(1, "pb\n", 3);
}
