/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chajjar <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/24 04:28:01 by chajjar           #+#    #+#             */
/*   Updated: 2022/03/16 10:53:43 by chajjar          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t count, size_t size)
{
	char			*ptr;
	unsigned int	total;
	unsigned int	i;

	total = count * size;
	ptr = malloc(total);
	if (!ptr)
		return (NULL);
	i = 0;
	while (total > 0)
	{
		ptr[i] = 0;
		i++;
		total--;
	}
	return ((void *)ptr);
}
