/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lc.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mclam <mclam@student.21-school.ru>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/29 17:10:30 by mclam             #+#    #+#             */
/*   Updated: 2021/09/29 17:10:30 by mclam            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	lc_freeone(t_lc *lc, char mode)
{
	t_lc	*l;

	l = lc;
	while (l->next && l->next->next)
		l = l->next;
	if (l == lc && !l->next)
	{
		free(l->ptr);
		l->ptr = NULL;
		return (0);
	}
	free(l->next->ptr);
	free(l->next);
	l->next = NULL;
	return (!(l->flag && mode));
}

static void	lc_freemem(t_lc *lc, char mode)
{
	int	delone_result;

	delone_result = 1;
	while (delone_result)
		delone_result = lc_freeone(lc, mode);
}

static void	lc_newptr(t_lc *lc, void *ptr)
{
	t_lc	*l;

	l = lc;
	if (!l->ptr)
	{
		l->ptr = ptr;
		return ;
	}
	while (l->next)
		l = l->next;
	l->next = malloc(sizeof(t_lc));
	if (!l->next)
	{
		ft_errmsg("malloc error in lc() function", errno);
		lc_freemem(lc, 0);
	}
	else
	{
		ft_bzero(l->next, sizeof(t_lc));
		l->next->ptr = ptr;
	}
}

static void	lc_fix(t_lc *lc)
{
	t_lc	*l;

	l = lc;
	while (l->next)
		l = l->next;
	l->flag = 1;
}

void	*lc(void *ptr)
{
	static t_lc	lc;

	if (ptr == FREE_ALL)
		lc_freemem(&lc, (char)FREE_ALL);
	else if (ptr == FREE_TO_FIX)
		lc_freemem(&lc, (char)FREE_TO_FIX);
	else if (ptr == FIX_POINTER)
		lc_fix(&lc);
	else
	{
		lc_newptr(&lc, ptr);
		return (ptr);
	}
	return (NULL);
}
