/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: afalconi <afalconi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/21 01:38:31 by afalconi          #+#    #+#             */
/*   Updated: 2023/05/23 13:51:53 by afalconi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H

# include <fcntl.h>
# include <stdio.h>
# include <stdlib.h>
# include <sys/types.h>
# include <unistd.h>
# include <string.h>
# include <stdlib.h>

typedef struct s_stacka {
	int	num
	int	index;
}	t_stacka;

typedef struct s_stackb {
	int	*stcka;
	int	*stckb;
	int	ntot;
}	t_stackb;

typedef struct s_ps {
	int	*stcka;
	int	*stckb;
	int	ntot;
}	t_ps;

void	ft_atoicalc(int *som, int x, int i, const char *str);
int		ft_atoi(const char *str);
void	fillstack(int ac, char **av, t_ps *ps);
void	ss(t_ps *ps);
void	sa(t_ps *ps);
void	sb(t_ps *ps);
void	pa(t_ps *ps);
void	pb(t_ps *ps);
void	ra(t_ps *ps);
void	rb(t_ps *ps);
void	rr(t_ps *ps);
void	rra(t_ps *ps);

#endif
