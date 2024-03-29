/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   moves.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: afalconi <afalconi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/23 16:17:54 by afalconi          #+#    #+#             */
/*   Updated: 2023/06/13 19:59:19 by afalconi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef MOVES_H
# define MOVES_H

# include <unistd.h>
# include <stdlib.h>
# include <stdio.h>
# include <limits.h>

typedef struct s_moves {
	int				n;
	struct s_moves	*next;
	struct s_moves	*prev;
}	t_moves;

typedef struct s_contmoves {
	int		vmovesa;
	int		vmovesb;
	int		vraorrra;
	int		vrborrrb;
	int		movesa;
	int		movesb;
	int		raorrra;
	int		rborrrb;
}	t_contmoves;

typedef struct s_pushsw {
	t_moves		*ska;
	t_moves		*skb;
	int			size_a;
	int			size_b;
	int			maxa;
	int			mina;
	int			mid;
	t_contmoves	contm;
}	t_pushsw;

void	ss(t_pushsw *ps, int f);
void	sa(t_pushsw *ps, int f);
void	sb(t_pushsw *ps, int f);
void	pa(t_pushsw *ps, int f);
void	pb(t_pushsw *ps, int f);
void	ra(t_pushsw *ps, int f);
void	rb(t_pushsw *ps, int f);
void	rr(t_pushsw *ps, int f);
void	rra(t_pushsw *ps, int f);
void	rrb(t_pushsw *ps, int f);
void	rrr(t_pushsw *ps, int f);

#endif
