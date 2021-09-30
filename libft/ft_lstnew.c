/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstnew.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mclam <mclam@student.21-school.ru>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/19 01:58:55 by mclam             #+#    #+#             */
/*   Updated: 2021/09/19 01:58:55 by mclam            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
** Allocates (with malloc(3)) and returns a new element.
** The variable ’content’ is initialized with the value of the parameter
** ’content’. The variable ’next’ is initialized to NULL.
** Return value: The new element.
** Parametr: The content to create the new element with.
*/
t_list	*ft_lstnew(void *content)
{
	t_list	*elem;

	elem = malloc(sizeof(t_list));
	if (elem)
	{
		elem->content = content;
		elem->next = NULL;
	}
	return (elem);
}
