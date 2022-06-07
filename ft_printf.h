/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chajjar <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/23 14:45:21 by chajjar           #+#    #+#             */
/*   Updated: 2022/06/06 16:16:49 by chajjar          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include <stdarg.h>
# include <unistd.h>
# include <limits.h>
# include <stdio.h>

# include "libft.h"

typedef struct s_plist
{
	int	len;
	int	widht;
}				t_plist;

void		ft_putchar(char c);
void		ft_putnbr(int nb);
void		ft_putstr(char *s);
void		ft_putnbr_u(unsigned int n);
int			ft_intlen_base10(long long nb);
int			ft_intlen_base16(unsigned long long nb);
const char	*ft_search_d(va_list arg, const char *format, t_plist *list);
const char	*ft_search_s(va_list arg, const char *format, t_plist *list);
const char	*ft_search_x(va_list arg, const char *format, t_plist *list);
const char	*ft_search_tx(va_list arg, const char *format, t_plist *list);
const char	*ft_search_c(va_list arg, const char *format, t_plist *list);
const char	*ft_search_100(const char *format, t_plist *list);
const char	*ft_search_i(va_list arg, const char *format, t_plist *list);
const char	*ft_search_u(va_list arg, const char *format, t_plist *list);
const char	*ft_search_p(va_list arg, const char *format, t_plist *list);
void		ft_printhexa(unsigned long int d, char *hexa);
const char	*ft_read(t_plist *list, const char *format);
const char	*ft_format(const char *format, va_list arg, t_plist *list);
int			ft_printf(const char *format, ...);

#endif
