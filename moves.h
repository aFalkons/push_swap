/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   moves.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: afalconi <afalconi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/23 16:17:54 by afalconi          #+#    #+#             */
/*   Updated: 2023/05/23 16:56:36 by afalconi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef MOVES_H
# define MOVES_H

# include <unistd.h>
# include <stdlib.h>
# include <stdio.h>
# include <limits.h>

typedef struct s_ps {
	int	*stcka;
	int	*stckb;
	int	ntot;
	int	size_a;
	int	size_b;
}	t_ps;

void	*ft_malloc(int bytes);
void	ss(t_ps *ps, int f);
void	sa(t_ps *ps, int f);
void	sb(t_ps *ps, int f);
void	pa(t_ps *ps, int f);
void	pb(t_ps *ps, int f);
void	ra(t_ps *ps, int f);
void	rb(t_ps *ps, int f);
void	rr(t_ps *ps, int f);
void	rra(t_ps *ps, int f);
void	rrb(t_ps *ps, int f);
void	rrr(t_ps *ps, int f);
void	set_b(t_ps *ps, int size);

#endif
