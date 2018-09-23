/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jdubula <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/06/12 09:26:02 by jdubula           #+#    #+#             */
/*   Updated: 2018/06/16 16:19:41 by jdubula          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	ft_strl(int n)
{
	int		i;

	i = 1;
	while (n /= 10)
		i++;
	return (i);
}

char		*ft_itoa(int n)
{
	char			*str;
	size_t			str_len;
	unsigned int	number;

	str_len = ft_strl(n);
	number = n;
	if (n < 0)
	{
		number = -n;
		str_len++;
	}
	if (!(str = ft_strnew(str_len)))
		return (NULL);
	str[--str_len] = number % 10 + '0';
	while (number /= 10)
		str[--str_len] = number % 10 + '0';
	if (n < 0)
		str[0] = '-';
	return (str);
}
