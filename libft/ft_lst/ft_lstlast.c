/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstlast.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amonier <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/22 17:35:04 by amonier           #+#    #+#             */
/*   Updated: 2022/11/22 18:26:53 by amonier          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../Includes/libft.h"

i_list	*ft_lstlast(i_list *lst)
{
	i_list	*temp;

	if (lst == NULL)
		return (NULL);
	temp = lst;
	while (temp->next != 0)
		temp = temp->next;
	return (temp);
}
