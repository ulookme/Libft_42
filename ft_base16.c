/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_base16.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chajjar <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/23 15:33:24 by chajjar           #+#    #+#             */
/*   Updated: 2022/03/24 10:50:51 by chajjar          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_intlen_base16(unsigned long long nb)
{
	unsigned long long	i;
	unsigned long long	number;
	int					neg;

	i = 0;
	number = 0;
	neg = 0;
	if (!nb)
		return (1);
	if (nb < 0)
	{
		neg = 1;
		number = -nb;
	}
	else
		number = nb;
	while (number)
	{
		number /= 16;
		i++;
	}
	return (i + neg);
}
