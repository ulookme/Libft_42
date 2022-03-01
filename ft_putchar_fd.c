/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putchar_fd.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chajjar <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/28 07:28:29 by chajjar           #+#    #+#             */
/*   Updated: 2022/02/28 07:36:37 by chajjar          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/**c: Le caractère à écrire.
fd: Le descripteur de fichier sur lequel écrire.
**/

#include "libft.h"

void	ft_putchar_fd(char c, int fd)
{
	write(fd, &c, 1);
}
