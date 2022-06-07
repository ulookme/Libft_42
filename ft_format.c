/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_format.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chajjar <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/23 15:16:02 by chajjar           #+#    #+#             */
/*   Updated: 2022/06/06 15:52:27 by chajjar          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

const char	*ft_format(const char *format, va_list arg, t_plist *list)
{
	if (*(format + 1) == 'd')
		format = ft_search_d(arg, format + 1, list);
	else if (*(format + 1) == 's')
		format = ft_search_s(arg, format + 1, list);
	else if (*(format + 1) == 'x')
		format = ft_search_x(arg, format + 1, list);
	else if (*(format + 1) == 'X')
		format = ft_search_tx(arg, format + 1, list);
	else if (*(format + 1) == 'c')
		format = ft_search_c(arg, format + 1, list);
	else if (*(format + 1) == 'p')
		format = ft_search_p(arg, format + 1, list);
	else if (*(format + 1) == 'i')
		format = ft_search_i(arg, format + 1, list);
	else if (*(format + 1) == 'u')
		format = ft_search_u(arg, format + 1, list);
	else if (*(format + 1) == '%')
		format = ft_search_100(format + 1, list);
	return (format);
}
