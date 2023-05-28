/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   bo.c                                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: afalconi <afalconi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/27 08:14:38 by afalconi          #+#    #+#             */
/*   Updated: 2023/05/28 19:04:49 by afalconi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

void	fristswap(t_pushsw *ps)
{
	while (ps->ska->next)
		pa(ps, 0);
	pa(ps, 0);
	pb(ps, 0);
	pb(ps, 0);
	pb(ps, 0);
	sort3(ps);
}

void	sort3(t_pushsw *ps)
{
	if (ps->ska->n > ps->ska->next->n)
		sa(ps, 0);
	if (ps->ska->next->n > ps->ska->next->next->n)
	{
		sa(ps, 0);
		ra(ps, 0);
		printf("GG\n");
	}
	if (ps->ska->n > ps->ska->next->n)
		sa(ps, 0);
}
