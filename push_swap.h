/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: afalconi <afalconi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/21 01:38:31 by afalconi          #+#    #+#             */
/*   Updated: 2023/06/01 16:43:27 by afalconi         ###   ########.fr       */
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

void	setup(t_pushsw *ps, int ac, char **av);
int		ft_atol(char *str, t_pushsw *ps);
int		ft_strlen(char *str);
void	*ft_malloc(int bytes);
void	ft_exit(char *str, t_pushsw *ps);
void	ft_free(t_pushsw *ps);
void	fristswap(t_pushsw *ps);
void	sort3(t_pushsw *ps);
void	puttop(t_pushsw *ps);
int		cksort(t_pushsw *ps);
void	maxemin(t_pushsw *ps);
void	ckpusha(t_pushsw *ps);
void	inizmy(t_pushsw *ps);

#endif
