/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_read.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chajjar <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/23 15:14:41 by chajjar           #+#    #+#             */
/*   Updated: 2022/06/06 16:15:25 by chajjar          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

const char	*ft_read(t_plist *list, const char *format)
{
	char	*next;

	next = ft_strchr(format, '%');
	if (next)
		list->widht = next - format;
	else
		list->widht = ft_strlen(format);
	write(1, format, list->widht);
	list->len += list->widht;
	while (*format && *format != '%')
		++format;
	return (format);
}
