/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jdubula <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/05/22 11:17:16 by jdubula           #+#    #+#             */
/*   Updated: 2018/06/12 08:33:29 by jdubula          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int		ft_memcmp(const	void *s1, const	void *s2, size_t n)
{
	size_t	i;
	char	*str1;
	char	*str2;

	str1 = (char *)s1;
	str2 = (char *)s2;
	i = -1;
	while (n != 0)
	{
		if ((((unsigned char)str1[i]) -
					((unsigned char)str2[i])) != 0 && n != 0)
			break ;
		else
		{
			i++;
			n--;
		}
	}
	return (((unsigned char)str1[i] - (unsigned char)str2[i]));
}
