/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: afalconi <afalconi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/22 05:42:17 by afalconi          #+#    #+#             */
/*   Updated: 2023/06/05 21:40:42 by afalconi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int main(int ac, char **av)
{
	t_pushsw ps;

	setup(&ps, ac, av);
	fristswap(&ps);
	while (ps.size_b != 0)
	{
		// while (ps.ska->next)
		// {
		// 	printf("--ska:%d\n", ps.ska->n);
		// 	ps.ska = ps.ska->next;
		// }
		// printf("--ska:%d\n", ps.ska->n);
		// while (ps.skb->next)
		// {
		// 	printf("--skb:%d\n", ps.skb->n);
		// 	ps.skb = ps.skb->next;
		// }
		// printf("--skb:%d\n", ps.skb->n);
		// while(ps.ska->prev)
		// 	ps.ska = ps.ska->prev;
		// while(ps.skb->prev)
		// 	ps.skb = ps.skb->prev;
		puttop(&ps);
		exeputtop(&ps);
	}
	reorder(&ps);
	// while (ps.ska->next)
	// {
	// 	printf("ska:%d\n", ps.ska->n);
	// 	ps.ska = ps.ska->next;
	// }
	// printf("ska:%d\n", ps.ska->n);
	ft_free(&ps);
	return (0);
}
