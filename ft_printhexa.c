/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printhexa.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chajjar <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/23 15:12:28 by chajjar           #+#    #+#             */
/*   Updated: 2022/03/23 15:49:33 by chajjar          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	ft_printhexa(unsigned long int d, char *hexa)
{
	int	res[100];
	int	i;

	i = 0;
	while (d >= 16)
	{
		res[i] = hexa[d % 16];
		d = d / 16;
		i++;
	}
	res[i] = hexa[d];
	while (i >= 0)
	{
		ft_putchar(res[i]);
		i--;
	}
}
