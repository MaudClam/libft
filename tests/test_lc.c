/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mclam <mclam@student.21-school.ru>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/30 12:49:25 by mclam             #+#    #+#             */
/*   Updated: 2021/09/30 12:49:25 by mclam            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../libft/libft.h"

int main(void)
{
	static void	*ptr[1000];
	int			i = 0;
	int			k = 1024;
	
	sleep (1);
	while (i < k)
	{
		ptr[i] = lc(malloc(i * k));
		if (!ptr[i])
		{
			ft_errmsg("malloc[0] error in main()", errno);
			return (-1);
		}
		i++;
	}
	lc(FIX_POINTER);
	i = 0;
	while (i < k)
	{
		ptr[i] = malloc(i * k);
		if (!ptr[i])
		{
			ft_errmsg("malloc[0] error in main()", errno);
			return (-1);
		}
		i++;
	}
	lc(FREE_TO_FIX);
	lc(FREE_TO_FIX);
	sleep (1);
	exit(0);
}

//gcc -Wall -Wextra -Werror test_lc.c -L../libft -lft -I../libft
