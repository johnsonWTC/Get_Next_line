/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jdubula <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/05/29 11:24:31 by jdubula           #+#    #+#             */
/*   Updated: 2018/06/12 07:49:04 by jdubula          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_putstr(char const *s)
{
	int i;

	if (s == 0)
		return ;
	i = 0;
	while (s[i])
	{
		write(1, &s[i], 1);
		i++;
	}
}
"AKYW EUBlGHkXA63p      pNAFbS92TYWDuHUIs   xGLH2M4DJ1bhsrQ JXwcrhtl df9 ATYsV8UhCSWwogxKi pUIn     YFS jCy zUMDs 6qSXCvYi84b 4rK 8uhYo9VGlfDcRn wgftJDq4PGszxpSTc GY7CItnB4W   N1mR QiXx7Nojf"
