/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lc1.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mclam <mclam@student.21-school.ru>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/06 17:38:52 by mclam             #+#    #+#             */
/*   Updated: 2021/11/06 17:38:52 by mclam            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static void	lc_swap(t_lc *ptr1, t_lc *ptr2)
{
	t_lc	tmp;
	
	tmp.flag = ptr1->flag;
	tmp.next = ptr1->next;
	tmp.ptr = ptr1->ptr;
	ptr1->flag = ptr2->flag;
	ptr1->next = ptr2->next;
	ptr1->ptr = ptr2->ptr;
	ptr2->flag = tmp.flag;
	ptr2->next = tmp.next;
	ptr2->ptr = tmp.ptr;
}

void	lc_fromfix_tobegin(t_lc *begin)
{
	t_lc	*end;
	t_lc	*lastfix;

	end = begin;
	lastfix = NULL;
	while (end->next != NULL)
	{
		if (end->flag == 1)
			lastfix = end;
		end = end->next;
	}
	if (lastfix != NULL && lastfix->next != NULL)
	{
		lc_swap(begin, lastfix->next);
		end->next = lastfix->next;
		lastfix->next = NULL;
		lastfix->flag = 0;
	}
}
