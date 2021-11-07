/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lc1.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mclam <mclam@student.21-school.ru>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/06 17:38:52 by mclam             #+#    #+#             */
/*   Updated: 2021/11/07 01:25:05 by mclam            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_lc	*lc_newcell_add(t_lc **lc)
{
	t_lc	*tmp;
	
	tmp = NULL;
	if (*lc == NULL)
	{
		tmp = malloc(sizeof(t_lc));
		if (tmp != NULL)
		{
			ft_bzero(tmp, sizeof(t_lc));
			*lc = tmp;
		}
	}
	else
	{
		tmp = *lc;
		while (tmp->next != NULL)
			tmp = tmp->next;
		tmp->next = malloc(sizeof(t_lc));
		if (tmp->next != NULL)
		{
			ft_bzero(tmp->next, sizeof(t_lc));
			tmp = tmp->next;
		}
	}
	return (tmp);
}

void	lc_mark_ptr(t_lc *lc, unsigned int mark)
{
	while (lc->next)
		lc = lc->next;
	lc->flag = mark;
}

void	lc_mv_fromark_tobegin(t_lc **lc)
{
	t_lc	*begin;
	t_lc	*end;
	t_lc	*lastmark;

	begin = *lc;
	end = begin;
	lastmark = NULL;
	while (end->next != NULL)
	{
		if (end->flag > 0)
			lastmark = end;
		end = end->next;
	}
	if (lastmark != NULL && lastmark->next != NULL)
	{
		*lc = lastmark->next;
		end->next = begin;
		lastmark->next = NULL;
		if (lastmark->flag != (uintptr_t)HARDMARK_POINTER)
			lastmark->flag = 0;
	}
}