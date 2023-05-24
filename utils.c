/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   utils.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: afalconi <afalconi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/22 05:58:08 by afalconi          #+#    #+#             */
/*   Updated: 2023/05/24 23:41:40 by afalconi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int		ft_atol(const char *str)
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
	if(som > INT_MAX || som < INT_MIN)
		write(2, "Error\n", 6);
	som = som * seg;
	return(som);
}
