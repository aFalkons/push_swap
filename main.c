/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: afalconi <afalconi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/22 05:42:17 by afalconi          #+#    #+#             */
/*   Updated: 2023/06/11 19:25:23 by afalconi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int main(int ac, char **av)
{
	t_pushsw ps;

	if (ac == 1)
		ft_exit("Error\nbad input\n", NULL, 1);
	setup(&ps, ac, av);
	cksequesns(&ps);
	if (ps.size_a == 2 && ps.ska->n > ps.ska->next->n)
		ra(&ps, 0);
	ckjastsort(&ps);
	fristswap(&ps);
	while (ps.size_b != 0)
	{
		puttop(&ps);
		exeputtop(&ps);
	}
	reorder(&ps);
	ft_free(&ps);
	return (0);
}

void	ckjastsort(t_pushsw *ps)
{
	int n;

	n = ps->ska->n;
	ps->ska = ps->ska->next;
	while (ps->ska->next)
	{
		if (n > ps->ska->n)
		{
			while(ps->ska->prev)
				ps->ska = ps->ska->prev;
			return ;
		}
		n = ps->ska->n;
		ps->ska = ps->ska->next;
	}
	if (n > ps->ska->n)
	{
		while(ps->ska->prev)
			ps->ska = ps->ska->prev;
		return ;
	}
	while(ps->ska->prev)
		ps->ska = ps->ska->prev;
	ft_exit(NULL, ps, 0);
}

void	cksequesns(t_pushsw *ps)
{
	int n;
	int cont;
	t_moves *ck;

	while(ps->ska->next)
	{
		n = ps->ska->n;
		cont = 0;
		ck = ps->ska;
		while(ck->next)
		{
			if(n == ck->n)
				cont ++;
			ck = ck->next;
		}
		if(n == ck->n)
			cont ++;
		if (cont > 1)
			ft_exit("Error\nbad input\n", ps, 1);
		ps->ska = ps->ska->next;
	}
	while(ps->ska->prev)
		ps->ska = ps->ska->prev;
}
