/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: afalconi <afalconi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/22 05:48:02 by afalconi          #+#    #+#             */
/*   Updated: 2023/05/23 18:25:24 by afalconi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "moves.h"

void	*ft_malloc(int bytes)
{
	void	*var;

	var = malloc(bytes);
	if (!var)
		exit(0);
	return (var);
}

void	pa(t_ps	*ps, int f)
{
	int	*stka;
	int	*stkb;
	int i;

	stka = ft_malloc((ps->size_a + 1) * 4);
	stkb = ft_malloc((ps->size_b - 1) * 4);
	i = 0;
	stka[i] = ps->stckb[i];
	printf("diocane\n");
	while (++i < ps->size_a)
	{
		stka[i] = ps->stcka[i - 1];
		if (i < ps->size_b)
			stkb[i - 1] = ps->stckb[i];
	}
	(ps->size_b) --;
	(ps->size_a) ++;
	free(ps->stcka);
	free(ps->stckb);
	ps->stcka = stka;
	ps->stckb = stkb;
	if (f == 1)
		write(1, "pa\n", 3);
}

void	pb(t_ps	*ps, int f)
{
	if (ps->stcka[0])
		ps->stckb[0] = ps->stcka[0];
	if (f == 1)
		write(1, "pb\n", 3);
}
