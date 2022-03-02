/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chajjar <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/23 11:08:03 by chajjar           #+#    #+#             */
/*   Updated: 2022/03/01 13:25:15 by chajjar          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t dstsize)
{
	size_t	i;
	size_t	y;
	size_t	z;

	z = ft_strlen(dst);
	i = 0;
	y = z;
	while (src[i] && z < dstsize - 1 && dstsize > 0)
	{
		dst[y + i] = src[i];
		i++;
		z++;
	}
	dst[y + i] = '\0';
	if (z > dstsize)
		return (ft_strlen(src) + dstsize);
	return (ft_strlen(src) + y);
}
