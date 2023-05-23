/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: afalconi <afalconi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/22 05:42:17 by afalconi          #+#    #+#             */
/*   Updated: 2023/05/22 08:03:40 by afalconi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int main(int ac, char **av)
{
	t_ps ps;

	fillstack(ac, av, &ps);
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
