/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_back.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chajjar <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/09 09:54:34 by chajjar           #+#    #+#             */
/*   Updated: 2022/03/09 10:33:02 by chajjar          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstadd_back(t_list **lst, t_list *new)
{
	t_list	*elem;
	t_list	*next;

	if (lst == NULL)
	{
		*lst = new;
		return ;
	}
	if (lst != NULL && *lst != NULL)
	{
		elem = *lst;
		elem = ft_lstlast(*lst);
		elem->next = new;
		return ;
	}
	*lst = next;
}
