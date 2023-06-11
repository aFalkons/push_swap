/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   checkerh.h                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: afalconi <afalconi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/10 16:39:32 by afalconi          #+#    #+#             */
/*   Updated: 2023/06/11 19:12:48 by afalconi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CHECKERH_H
# define CHECKERH_H

# include <fcntl.h>
# include <stdio.h>
# include <stdlib.h>
# include <sys/types.h>
# include <unistd.h>
# include <string.h>
# include <limits.h>
#include "gnl/get_next_line.h"

typedef struct s_moves {
	int				n;
	struct s_moves	*next;
	struct s_moves	*prev;
}	t_moves;

typedef struct s_ck {
	t_moves	*ska;
	t_moves	*skb;
	int		size_a;
	int		size_b;
	char	*mov;
}	t_ck;

void			setup(t_ck *ps, int ac, char **av);
char			**ckinput(t_ck *ps, int ac, char **av, int *f);
void			ckinput2(char **av, t_ck *ps, int f);
void			freedellacosa(char	**str);
int				ft_atol(char *str, t_ck *ps);
void			ft_exit(char *str, t_ck *ps);
void			*ft_malloc(int bytes);
void			ft_free(t_ck *ps);
static size_t	get_word(char *s, char c);
char			**ft_split(char *s, char c);
char			*ft_substr(char *s, int start, size_t len);
int				ft_strncmp(char *s1, char *s2, size_t n);
void			pb(t_ck *ps, int f);
void			pa(t_ck *ps, int f);
void			ra(t_ck *ps, int f);
void			rb(t_ck *ps, int f);
void			rr(t_ck *ps, int f);
void			rra(t_ck *ps, int f);
void			rrb(t_ck *ps, int f);
void			rrr(t_ck *ps, int f);
void			sa(t_ck *ps, int f);
void			sb(t_ck *ps, int f);
void			ss(t_ck *ps, int f);
void			ckin(t_ck *ck);
int				exemoves(t_ck *ck, int i);
void			ckcomb(t_ck *ck);
void			cksequesns(t_ck *ps);


#endif
