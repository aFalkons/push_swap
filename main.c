/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: afalconi <afalconi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/22 05:42:17 by afalconi          #+#    #+#             */
/*   Updated: 2023/05/23 18:26:37 by afalconi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int main(int ac, char **av)
{
	t_ps ps;

	ps.stcka= malloc(7 * 4);
	ps.stckb = malloc(3 * 4);
	ps.stcka[0] = 3;
	ps.stcka[1] = 6;
	ps.stcka[2] = 8;
	ps.stcka[3] = 1;
	ps.stcka[4] = 2;
	ps.stcka[5] = 4;
	ps.stcka[6] = 0;
	ps.stckb[0] = 42;
	ps.stckb[1] = 24;
	ps.stckb[2] = 39;
	ps.size_a = 7;
	ps.size_b = 3;
	pa(&ps, 0);

	printf("%d\n", ps.stcka[0]);
	printf("%d\n", ps.stcka[1]);
	printf("%d\n", ps.stcka[2]);
	printf("%d\n", ps.stcka[3]);
	printf("%d\n", ps.stcka[4]);
	printf("%d\n", ps.stcka[5]);
	printf("%d\n", ps.stcka[6]);
	printf("%d\n", ps.stckb[0]);
	printf("%d\n", ps.stckb[1]);
	printf("%d\n", ps.stckb[2]);
	printf("%d\n", ps.size_a);
	printf("%d\n", ps.size_b);

}

void	fillstack(int ac, char **av, t_ps *ps)
{
	int	i;

	i = 0;
	ps->ntot = ac - 2;
	ps->stcka = malloc((ac - 2) * 4);
	ps->stckb = malloc((ac - 2) * 4);
	while(++i < ac)
		ps->stcka[(i - 1)] = ft_atoi(av[i]);
}
