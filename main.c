/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: afalconi <afalconi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/22 05:42:17 by afalconi          #+#    #+#             */
/*   Updated: 2023/05/28 19:03:00 by afalconi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int main(int ac, char **av)
{
	t_pushsw ps;

	setup(&ps, ac, av);
	fristswap(&ps);
	while (ps.ska->next != NULL)
	{
		printf("ska:%d\n", ps.ska->n);
		ps.ska = ps.ska->next;
	}
	printf("ska:%d\n", ps.ska->n);
	while (ps.skb->next != NULL)
	{
		printf("skb:%d\n", ps.skb->n);
		ps.skb = ps.skb->next;
	}
	printf("skb:%d\n", ps.skb->n);
	printf("size a = %d\n", ps.size_a);
	printf("size b = %d\n", ps.size_b);
	ft_free(&ps);
	return (0);
}
