/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jdubula <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/05/23 06:36:31 by jdubula           #+#    #+#             */
/*   Updated: 2018/06/16 16:36:06 by jdubula          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strstr(const char *haystack, const char *needle)
{
	size_t	i;
	size_t	a;

	if (*needle == '\0')
		return ((char *)haystack);
	i = 0;
	while (haystack[i] != '\0')
	{
		a = 0;
		while (needle[a] == haystack[i + a])
		{
			if (needle[a + 1] == '\0')
			{
				return ((char *)haystack + i);
			}
			a++;
		}
		i++;
	}
	return (0);
}
