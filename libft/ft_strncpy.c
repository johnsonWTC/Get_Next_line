/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jdubula <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/06/11 10:01:57 by jdubula           #+#    #+#             */
/*   Updated: 2018/06/11 10:02:03 by jdubula          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strncpy(char *dst, const char *src, size_t len)
{
	size_t i;
	size_t a;

	a = len;
	i = 0;
	while (i != len && src[i] != '\0')
	{
		dst[i] = src[i];
		i++;
		a--;
	}
	while (a != 0)
	{
		dst[i] = '\0';
		a--;
		i++;
	}
	return (dst);
}
