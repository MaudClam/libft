/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_back.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mclam <mclam@student.21-school.ru>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/19 03:09:55 by mclam             #+#    #+#             */
/*   Updated: 2021/09/19 03:09:55 by mclam            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
** Adds the element ’new’ at the end of the list.
** Parameter1: The address of a pointer to the first link of a list.
** Parameter2: The address of a pointer to the element to be added to the list.
*/
void	ft_lstadd_back(t_list **lst, t_list *new)
{
	t_list	*l;

	if (*lst)
	{
		l = *lst;
		while (l->next)
			l = l->next;
		l->next = new;
	}
	else
		*lst = new;
}
