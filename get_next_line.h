/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.h                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chajjar <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/24 12:09:45 by chajjar           #+#    #+#             */
/*   Updated: 2022/06/07 15:52:45 by chajjar          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef GET_NEXT_LINE_H
# define GET_NEXT_LINE_H

# include <stdio.h>
# include <stdlib.h>

# include <sys/types.h>
# include <sys/uio.h>
# include <unistd.h>
# include "libft.h"
# ifndef BUFFER_SIZE
#  define BUFFER_SIZE 1
# endif

char	*get_next_line(int fd);
//size_t	ft_strlen(const char *s);
//void	*ft_calloc(size_t count, size_t size);
//char	*ft_strjoin_get(char *s1, char const *s2);

#endif
