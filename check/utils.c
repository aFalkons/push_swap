/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   utils.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: afalconi <afalconi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/22 05:58:08 by afalconi          #+#    #+#             */
/*   Updated: 2023/06/11 19:46:53 by afalconi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "checkerh.h"


int		ft_atol(char *str, t_ck *ps)
{
	int				seg;
	long long		som;
	int				i;

	seg = 1;
	som = 0;
	i = 0;
	while ((str[i] >= 9 && str[i] <= 13) || str[i] == 32)
		i++;
	if (str[i] == '-' || str[i] == '+')
	{
		seg = ',' - str[i];
		i++;
	}
	while (str[i])
	{
		if (str[i] >= 48 && str[i] <= 57)
			som = (som * 10) + str[i] - 48;
		else
			break ;
		i++;
	}
	if (som > INT_MAX || som < INT_MIN)
		ft_exit("Error\nbad input", ps);
	return(som * seg);
}

void	ft_exit(char *str, t_ck *ps)
{
	if (str != NULL)
		write(2, str, ft_strlen(str));
	if (ps != NULL)
		ft_free(ps);
	exit(1);
}

void	*ft_malloc(int bytes)
{
	void	*var;

	var = malloc(bytes);
	if (!var)
		exit(0);
	return (var);
}
void	ft_free(t_ck *ps)
{
	if(ps->size_b > 1)
	{
		while (ps->skb->next)
			ps->skb = ps->skb->next;
		ps->skb = ps->skb->prev;
		while (ps->skb->prev)
		{
			free(ps->skb->next);
			ps->skb = ps->skb->prev;
		}
		free(ps->skb->next);
		free(ps->skb);
	}
	if (ps->size_b == 1)
		free(ps->skb);
	while (ps->ska->next)
		ps->ska = ps->ska->next;
	if (ps->ska->prev != NULL)
	{
		ps->ska = ps->ska->prev;
		while (ps->ska->prev)
		{
			free(ps->ska->next);
			ps->ska = ps->ska->prev;
		}
		free(ps->ska->next);
	}
	free(ps->ska);
}

int	ft_strncmp(char *s1, char *s2, size_t n)
{
	size_t	i;

	i = 0;
	if (!n)
		return (0);
	while (s1[i] && s2[i] && i < n - 1)
	{
		if (s1[i] != s2[i])
			break ;
		i++;
	}
	return (s1[i] - s2[i]);
}
