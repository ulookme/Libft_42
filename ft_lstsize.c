/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstsize.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chajjar <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/09 09:05:11 by chajjar           #+#    #+#             */
/*   Updated: 2022/03/09 09:26:35 by chajjar          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_lstsize(t_list *lst)
{
	int		i;
	t_list	*elem;

	i = 0;
	if (lst == NULL)
		return (i);
	elem = lst;
	while (elem != NULL)
	{
		elem = elem->next;
		i++;
	}
	return (i);
}
