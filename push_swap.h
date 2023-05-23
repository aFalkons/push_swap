/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: afalconi <afalconi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/21 01:38:31 by afalconi          #+#    #+#             */
/*   Updated: 2023/05/23 18:13:25 by afalconi         ###   ########.fr       */
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
#include "moves.h"

void	ft_atoicalc(int *som, int x, int i, const char *str);
int		ft_atoi(const char *str);
void	fillstack(int ac, char **av, t_ps *ps);
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

#endif
