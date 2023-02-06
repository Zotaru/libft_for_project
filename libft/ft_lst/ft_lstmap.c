/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amonier <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/23 18:00:43 by amonier           #+#    #+#             */
/*   Updated: 2022/11/24 23:25:37 by amonier          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../Includes/libft.h"

i_list	*ft_lstmap(i_list *lst, int (*f)(int), void (*del)(int))
{
	i_list	*new_list;
	i_list	*element;

	new_list = NULL;
	while (lst)
	{
		element = ft_lstnew((*f)(lst->content));
		if (element == NULL)
		{
			ft_lstclear(&new_list, (*del));
			return (NULL);
		}
		ft_lstadd_back(&new_list, element);
		lst = lst->next;
	}
	return (new_list);
}
