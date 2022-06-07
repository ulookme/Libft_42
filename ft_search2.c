/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_search2.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chajjar <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/23 21:35:41 by chajjar           #+#    #+#             */
/*   Updated: 2022/06/06 15:56:20 by chajjar          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

const char	*ft_search_100(const char *format, t_plist *list)
{
	int	c;

	c = 0;
	if (*format == '%')
	{
		write(1, "%", 1);
		list->len += 1;
	}
	else
		return (NULL);
	format++;
	return (format);
}

const char	*ft_search_i(va_list arg, const char *format, t_plist *list)
{
	int	d;

	d = 0;
	if (*format == 'i')
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

const char	*ft_search_u(va_list arg, const char *format, t_plist *list)
{
	unsigned int	d;

	d = 0;
	if (*format == 'u')
	{
		d = va_arg(arg, unsigned int);
		ft_putnbr_u(d);
		list->len += ft_intlen_base10(d);
	}
	else
		return (NULL);
	format++;
	return (format);
}

const char	*ft_search_p(va_list arg, const char *format, t_plist *list)
{
	unsigned long long	d;

	d = 0;
	if (*format == 'p')
	{
		write(1, "0x", 2);
		d = va_arg(arg, unsigned long long);
		ft_printhexa(d, "0123456789abcdef");
		list->len += ft_intlen_base16(d) + 2;
	}
	else
		return (NULL);
	format++;
	return (format);
}
