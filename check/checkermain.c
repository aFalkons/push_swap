/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   checkermain.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: afalconi <afalconi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/10 15:49:36 by afalconi          #+#    #+#             */
/*   Updated: 2023/06/13 21:38:37 by afalconi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "checkerh.h"

int	main(int ac, char **av)
{
	t_ck	ck;

	if (ac == 1)
		ft_exit("Error\n", NULL);
	setup(&ck, ac, av);
	ck.size_b = 0;
	if (ck.ska->next == NULL)
	{
		write(1, "OK\n", 3);
		exit(0);
	}
	cksequesns(&ck);
	while (ck.ska->prev)
		ck.ska = ck.ska->prev;
	ck.mov = get_next_line(0);
	while (ck.mov)
	{
		ckin(&ck);
		free(ck.mov);
		ck.mov = get_next_line(0);
	}
	free(ck.mov);
	ckcomb(&ck);
	ft_free(&ck);
	return (0);
}

void	ckin(t_ck *ck)
{
	char	*posmov[11];
	int		i;
	int		f;

	i = -1;
	f = 0;
	posmov[0] = "ra\n";
	posmov[1] = "rb\n";
	posmov[2] = "rr\n";
	posmov[3] = "rra\n";
	posmov[4] = "rrb\n";
	posmov[5] = "rrr\n";
	posmov[6] = "sa\n";
	posmov[7] = "sb\n";
	posmov[8] = "ss\n";
	posmov[9] = "pa\n";
	posmov[10] = "pb\n";
	while (++i < 11)
	{
		if (ft_strncmp(ck->mov, posmov[i], ft_strlen(posmov[i])) == 0)
			f = exemoves(ck, i);
	}
	if (f == 0)
		ft_exit("Error\n", ck);
}

int	exemoves(t_ck *ck, int i)
{
	if (i == 0)
		ra(ck, 1);
	else if (i == 1)
		rb(ck, 1);
	else if (i == 2)
		rr(ck, 1);
	else if (i == 3)
		rra(ck, 1);
	else if (i == 4)
		rrb(ck, 1);
	else if (i == 5)
		rrr(ck, 1);
	else if (i == 6)
		sa(ck, 1);
	else if (i == 7)
		sb(ck, 1);
	else if (i == 8)
		ss(ck, 1);
	else if (i == 9)
		pa(ck, 1);
	else if (i == 10)
		pb(ck, 1);
	return (1);
}

void	ckcomb(t_ck *ck)
{
	if (ck->skb != NULL)
		ft_exit("KO\n", ck);
	while (ck->ska->next)
	{
		if (ck->ska->n < ck->ska->next->n)
			ck->ska = ck->ska->next;
		else
			ft_exit("KO\n", ck);
	}
	write(1, "OK\n", 3);
}

void	cksequesns(t_ck *ps)
{
	int		n;
	int		cont;
	t_moves	*ck;

	while (ps->ska->next)
	{
		n = ps->ska->n;
		cont = 0;
		ck = ps->ska;
		while (ck->next)
		{
			if (n == ck->n)
				cont ++;
			ck = ck->next;
		}
		if (n == ck->n)
			cont ++;
		if (cont > 1)
			ft_exit("Error\n", ps);
		ps->ska = ps->ska->next;
	}
}
