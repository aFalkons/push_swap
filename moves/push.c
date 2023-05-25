/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: afalconi <afalconi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/22 05:48:02 by afalconi          #+#    #+#             */
/*   Updated: 2023/05/25 22:19:29 by afalconi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../moves.h"

void	*ft_malloc(int bytes)
{
	void	*var;

	var = malloc(bytes);
	if (!var)
		exit(0);
	return (var);
}

void	pa(t_moves	*ps, int f)
{

}

void	pb(t_moves	*ps, int f)
{
	
}
