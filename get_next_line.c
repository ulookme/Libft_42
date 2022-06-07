/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chajjar <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/24 12:10:29 by chajjar           #+#    #+#             */
/*   Updated: 2022/06/07 15:50:35 by chajjar          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "get_next_line.h"

static char	*ft_strjoin_get(char *s1, char const *s2)
{
	size_t	i;
	size_t	len1;
	char	*str;

	if (s1 && s2)
	{
		len1 = ft_strlen(s1);
		str = (char *)malloc(sizeof(char) * (len1 + ft_strlen(s2) + 1));
		if (str == NULL)
			return (NULL);
		i = -1;
		while (s1[++i])
			str[i] = s1[i];
		i = -1;
		while (s2[++i])
		{
			str[len1] = s2[i];
			len1++;
		}
		str[len1] = '\0';
		free(s1);
		return (str);
	}
	return (NULL);
}

char	*get_next_line(int fd)
{
	char	*buffer;
	char	*line;
	int		re;

	buffer = ft_calloc(((BUFFER_SIZE / BUFFER_SIZE) + 1), sizeof(char));
	line = NULL;
	re = read(fd, buffer, (BUFFER_SIZE / BUFFER_SIZE));
	if (re > 0)
		line = ft_calloc(((BUFFER_SIZE / BUFFER_SIZE) + 1), sizeof(char));
	while (re > 0 && buffer[0] != '\n')
	{
		line = ft_strjoin_get(line, buffer);
		re = read(fd, buffer, (BUFFER_SIZE / BUFFER_SIZE));
	}
	if (buffer[0] == '\n')
		line = ft_strjoin(line, "\n");
	free(buffer);
	return (line);
}
