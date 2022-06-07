/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_put_elem.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chajjar <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/23 15:04:52 by chajjar           #+#    #+#             */
/*   Updated: 2022/03/24 10:57:18 by chajjar          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_putstr(char *s)
{
	int	i;

	i = 0;
	while (s[i])
	{
		ft_putchar(s[i]);
		i++;
	}
}

void	ft_putnbr_u(unsigned int n)
{
	unsigned int	nb;
	char			c;

	if (n < 0)
	{
		write(1, "-", 1);
		n = -n;
	}
	nb = n;
	c = (nb % 10) + '0';
	if (nb > 9)
		ft_putnbr_u(nb / 10);
	write(1, &c, 1);
}

void	ft_putnbr(int nb)
{
	if (nb == INT_MIN)
	{
		write(1, "-2147483648", 11);
		return ;
	}
	if (nb >= 0 && nb <= 9)
		ft_putchar(nb + 48);
	else if (nb < 0)
	{
		ft_putchar('-');
		ft_putnbr(-nb);
	}
	else
	{
		ft_putnbr(nb / 10);
		ft_putnbr(nb % 10);
	}
}
