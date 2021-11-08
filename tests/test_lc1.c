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
	static void	*ptr[700];
	size_t		k = 1000000;
	int			i;
	
	sleep (1);

	i = 0;
	while (i < 3)
		ptr[i++] = lc(malloc(k));
	lc(PUT_HARDBARRIER);
	
	i = 3;
	while (i < 700)
		ptr[i++] = lc(malloc(k));
//	lc(MOVE_PTRS_TO_BEGIN);

//	i = 0;
//	while (i < 3)
//		ptr[i++] = lc(malloc(k));
	lc(FREE_TO_BARRIER);
	lc(FREE_TO_BARRIER);
	lc(FREE_TO_BARRIER);

	lc(FREE_ALL);
	sleep (1);
	exit(0);
}

//gcc -Wall -Wextra -Werror test_lc1.c -L../libft -lft -I../libft
