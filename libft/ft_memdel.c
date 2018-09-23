/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memdel.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jdubula <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/06/07 07:21:26 by jdubula           #+#    #+#             */
/*   Updated: 2018/06/12 08:30:06 by jdubula          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_memdel(void **ap)
{
	if ((ap == 0 || ap == '\0') || (*ap == 0 || *ap == '\0'))
		return ;
	free(*ap);
	*ap = 0;
}
