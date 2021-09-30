/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mclam <mclam@student.21-school.ru>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/19 04:56:34 by mclam             #+#    #+#             */
/*   Updated: 2021/09/19 04:56:34 by mclam            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
** Iterates the list ’lst’ and applies the function ’f’ to the content
** of each element. Creates a new list resulting of the successive
** applications of the function ’f’. The ’del’ function is used to delete
** the content of an element if needed.
** Return value: The new list. NULL if the allocation fails.
** Parameter1: The adress of a pointer to an element.
** Parameter2: The adress of the function used to iterate on the list.
** Parameter3: The adress of the function used to delete the content
** of an element if needed.
*/
t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	t_list	*result;
	t_list	*elem;

	if (!lst)
		return (NULL);
	result = NULL;
	while (lst)
	{
		elem = ft_lstnew((*f)(lst->content));
		if (!elem)
		{
			ft_lstclear(&result, del);
			return (NULL);
		}
		ft_lstadd_back(&result, elem);
		lst = lst->next;
	}
	return (result);
}
