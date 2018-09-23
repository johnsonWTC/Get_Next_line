/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jdubula <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/06/12 09:15:35 by jdubula           #+#    #+#             */
/*   Updated: 2018/06/16 16:27:51 by jdubula          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *haystack, const char *needle, size_t len)
{
	size_t	i;
	size_t	z;

	if (*needle == '\0')
		return ((char *)haystack);
	i = 0;
	while (haystack[i] && len != 0)
	{
		z = 0;
		while (needle[z] == haystack[i + z] && len != 0 && i < len)
		{
			if (needle[z] == '\0' || needle[z + 1] == '\0')
			{
				return ((char *)haystack + i);
			}
			z++;
			len--;
		}
		i++;
	}
	return (NULL);
}
