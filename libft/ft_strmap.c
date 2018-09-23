/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jdubula <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/06/12 07:02:54 by jdubula           #+#    #+#             */
/*   Updated: 2018/06/12 07:07:57 by jdubula          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strmap(char const *s, char (*f)(char))
{
	char	*new_str;
	int		i;
	int		len;

	if (s == 0 || s == '\0')
		return (NULL);
	len = ft_strlen(s);
	new_str = ft_strnew(len);
	if (new_str == 0 || new_str == '\0')
		return (NULL);
	i = 0;
	while ((s[i]))
	{
		new_str[i] = (*f)(s[i]);
		i++;
	}
	return (new_str);
}
