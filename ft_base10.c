/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_base10.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chajjar <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/23 15:32:04 by chajjar           #+#    #+#             */
/*   Updated: 2022/03/23 22:24:31 by chajjar          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_intlen_base10(long long nb)
{
	long long	i;
	long long	number;
	int			neg;

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
		number /= 10;
		i++;
	}
	return (i + neg);
}
