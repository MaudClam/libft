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
	
	sleep (1);
	ptr[0] = lc(malloc(k));	//1
	lc(FIX_POINTER);		//2
	ptr[1] = lc(malloc(k));	//3
	ptr[2] = lc(malloc(k));	//4
	lc(FIX_POINTER);		//5
	ptr[3] = lc(malloc(k));	//6
	ptr[4] = lc(malloc(k));	//7
	ptr[5] = lc(malloc(k));	//8
	ptr[6] = lc(malloc(k));	//9
	lc(FROMFIX_TOBEGIN);	//10
	lc(FREE_TO_FIX);		//11

	lc(FREE_ALL);
	sleep (1);
	exit(0);
}

//gcc -Wall -Wextra -Werror test_lc1.c -L../libft -lft -I../libft
