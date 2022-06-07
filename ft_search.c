/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_search.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chajjar <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/23 15:19:12 by chajjar           #+#    #+#             */
/*   Updated: 2022/06/06 15:55:46 by chajjar          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

const char	*ft_search_d(va_list arg, const char *format, t_plist *list)
{
	int	d;

	d = 0;
	if (*format == 'd')
	{
		d = va_arg(arg, int);
		ft_putnbr(d);
		list->len += ft_intlen_base10(d);
	}
	else
		return (NULL);
	format++;
	return (format);
}

const char	*ft_search_s(va_list arg, const char *format, t_plist *list)
{
	char	*d;

	d = 0;
	if (*format == 's')
	{
		d = va_arg(arg, char *);
		if (!d)
		{
			write(1, "(null)", 6);
			list->len += 6;
		}
		else
		{
			ft_putstr(d);
			list->len += ft_strlen(d);
		}
	}
	else
		return (NULL);
	format++;
	return (format);
}

const char	*ft_search_x(va_list arg, const char *format, t_plist *list)
{
	unsigned int	d;

	d = 0;
	if (*format == 'x')
	{
		d = va_arg(arg, unsigned int);
		ft_printhexa((unsigned long)d, "0123456789abcdef");
		list->len += ft_intlen_base16((unsigned long)d);
	}
	else
		return (NULL);
	format++;
	return (format);
}

const char	*ft_search_tx(va_list arg, const char *format, t_plist *list)
{
	unsigned long	x;

	x = 0;
	if (*format == 'X')
	{
		x = va_arg(arg, unsigned int);
		ft_printhexa((unsigned long)x, "0123456789ABCDEF");
		list->len += ft_intlen_base16((unsigned long)x);
	}
	else
		return (NULL);
	format++;
	return (format);
}

const char	*ft_search_c(va_list arg, const char *format, t_plist *list)
{
	char	c;

	c = 0;
	if (*format == 'c')
	{
		c = va_arg(arg, int);
		ft_putchar(c);
		list->len += 1;
	}
	else
		return (NULL);
	format++;
	return (format);
}
