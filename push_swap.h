/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: afalconi <afalconi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/21 01:38:31 by afalconi          #+#    #+#             */
/*   Updated: 2023/06/09 02:20:17 by afalconi         ###   ########.fr       */
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
void	exeputtop(t_pushsw *ps);
void	exemos(int f, int cont, t_pushsw *ps);
char	**ckinput(t_pushsw *ps, int ac, char **av, int *f);
void	ckinput2(char **av, t_pushsw *ps);
static size_t	get_word(char *s, char c);
char	**ft_split(char *s, char c);
char	*ft_substr(char *s, int start, size_t len);
void	freedellacosa(char	**str);
void	reorder(t_pushsw *ps);
void	exedobemoves(t_pushsw *ps, int f, int *cont1, int *cont2);
int		*lisanchesepococonvinto(t_pushsw *ps);

#endif
