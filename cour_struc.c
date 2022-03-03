/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   cour_struc.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chajjar <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/03 12:14:54 by chajjar           #+#    #+#             */
/*   Updated: 2022/03/03 17:17:32 by chajjar          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

#include <stdlib.h>

/*typedef struct s_list
{
	void			*content;
	size_t			content_size;
	struct s_list	*next;
}	t_list;*/

void	ft_lstadd_front(t_list **lst, t_list *new)
{
	if (*lst == NULL)
	{
		 *lst = new;
		 return ;
	}
	new->next = *lst;
}

/*int main(int argc, char **argv)
{
    t_list ma_liste = NULL;
 
    ma_liste = ajouterEnTete(ma_liste, i);
 
    return 0;
}*/

int main(void)
{
    t_list *head = ft_lstnew("Hello");
	t_list *new = ft_lstnew("World");
    ft_lstadd_front(&head, new);

    printf( "%s %s\n", ( char * )new->content, ( char * )new->next->content );

    return 0;
}
