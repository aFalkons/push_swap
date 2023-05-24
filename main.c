/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: afalconi <afalconi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/22 05:42:17 by afalconi          #+#    #+#             */
/*   Updated: 2023/05/24 23:20:06 by afalconi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int main(int ac, char **av)
{
	t_moves ps;

	setup(&ps, ac, av);
	ps.stcka= malloc((ac - 1) * 4);
	ps.stckb = malloc(3 * 4);
	ps.stckb[0] = 3;
	ps.stckb[1] = 6;
	ps.stckb[2] = 8;
	ps.stckb[3] = 1;
	ps.stckb[4] = 2;
	ps.stckb[5] = 4;
	ps.stckb[6] = 0;
	ps.stcka[0] = 42;
	ps.stcka[1] = 24;
	ps.stcka[2] = 39;
	ps.size_b = 7;
	ps.size_a = 3;
	pb(&ps, 0);

	printf("%d\n", ps.stckb[0]);
	printf("%d\n", ps.stckb[1]);
	printf("%d\n", ps.stckb[2]);
	printf("%d\n", ps.stckb[3]);
	printf("%d\n", ps.stckb[4]);
	printf("%d\n", ps.stckb[5]);
	printf("%d\n", ps.stckb[6]);
	printf("%d\n", ps.stcka[0]);
	printf("%d\n", ps.stcka[1]);
	printf("%d\n", ps.stcka[2]);
	printf("%d\n", ps.size_a);
	printf("%d\n", ps.size_b);

}

void	setup(t_moves ps, int ac, char **av)
{
	ps.stcka= malloc((ac - 1) * 4);
	ps.stckb = malloc(3 * 4);

	
}

