/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jdubula <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/06/08 11:14:38 by jdubula           #+#    #+#             */
/*   Updated: 2018/06/16 16:16:45 by jdubula          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int		ft_atoi(const char *str)
{
	size_t	i;
	size_t	a;
	size_t	sign;

	a = 0;
	while (ft_spaces(str[a]))
		a++;
	if (str == '\0')
		return (0);
	sign = 1;
	if (str[a] == '-' || str[a] == '+')
	{
		if (str[a] == '-')
			sign = -1;
		a++;
	}
	i = 0;
	while (str[a] && str[a] >= '0' && (str[a] <= '9'))
	{
		i = i * 10 + str[a] - '0';
		a++;
	}
	return (i * sign);
}
