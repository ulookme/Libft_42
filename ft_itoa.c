/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chajjar <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/27 14:03:12 by chajjar           #+#    #+#             */
/*   Updated: 2022/03/01 14:01:56 by chajjar          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static char	*if_pos(int n, int count)
{
	char	*str;

	str = (char *)malloc(sizeof(char) * (count + 1));
	if (str == NULL)
		return (NULL);
	str[count] = '\0';
	while (--count >= 0)
	{
		str[count] = (n % 10) + '0';
		n /= 10;
	}
	return (str);
}

static int	ft_countdigit(long long n)
{
	size_t	count;

	count = 0;
	while (n != 0)
	{
		n = n / 10;
		++count;
	}
	return (count);
}

static char	*if_neg(int n, int count)
{
	char	*str;
	size_t	num;

	str = (char *)malloc(sizeof(char) * (count + 2));
	if (str == NULL)
		return (NULL);
	num = n * -1;
	str[count + 1] = '\0';
	while (count)
	{
		str[count] = (num % 10) + '0';
		count--;
		num /= 10;
	}
	str[0] = '-';
	return (str);
}

char	*ft_itoa(int n)
{
	int	count;

	count = ft_countdigit(n);
	if (n < 0)
		return (if_neg(n, count));
	return (if_pos(n, count));
}
