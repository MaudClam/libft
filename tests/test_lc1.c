/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_lc1.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mclam <mclam@student.21-school.ru>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/06 16:32:46 by mclam             #+#    #+#             */
/*   Updated: 2021/11/06 16:32:46 by mclam            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../libft/libft.h"

int main(void)
{
	static void	*ptr[7];
	size_t		k = 1000000;
	int			i;
	
	sleep (1);

	i = 0;
	while (i < 3)
		ptr[i++] = lc(malloc(k));
	lc(HARDMARK_POINTER);
	
	i = 0;
	while (i < 3)
		ptr[i++] = lc(malloc(k));
	lc(MV_FROMARK_TOBEGIN);

	i = 0;
	while (i < 3)
		ptr[i++] = lc(malloc(k));
	lc(FREE_TO_MARK);

	lc(FREE_TO_MARK);
	lc(FREE_TO_MARK);

	lc(FREE_ALL);
	sleep (1);
	exit(0);
}

//gcc -Wall -Wextra -Werror test_lc1.c -L../libft -lft -I../libft
