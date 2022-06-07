/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chajjar <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/23 15:40:57 by chajjar           #+#    #+#             */
/*   Updated: 2022/06/06 15:53:07 by chajjar          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_printf(const char *format, ...)
{
	va_list	arg;
	t_plist	list;

	va_start(arg, format);
	list.len = 0;
	list.widht = 0;
	if (!format)
		return (-1);
	while (*format)
	{
		if (*format == '%')
			format = ft_format(format, arg, &list);
		else
			format = ft_read(&list, format);
		if (!format)
		{
			write(1, "(null)", 6);
			va_end(arg);
			return (list.len);
		}
	}
	va_end(arg);
	return (list.len);
}
