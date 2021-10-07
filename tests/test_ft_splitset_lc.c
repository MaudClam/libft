/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_ft_splitset_lc.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mclam <mclam@student.21-school.ru>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/06 20:09:30 by mclam             #+#    #+#             */
/*   Updated: 2021/10/06 20:09:30 by mclam            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../libft/libft.h"
#include <stdio.h>

int	main()
{
	char	**split;
	int		i;
	
	printf("ft_splitset_lc('', '')\n");
	split = ft_splitset_lc("", "");
	i = 0;
	while (split[i])
	{
		printf("%s\n", split[i]);
		i++;
	}
	printf("========================\n\n");
	printf("ft_splitset_lc('', NULL)\n");
	split = ft_splitset_lc("", NULL);
	i = 0;
	while (split[i])
	{
		printf("%s\n", split[i]);
		i++;
	}
	printf("========================\n\n");
	printf("ft_splitset_lc(NULL, '')\n");
	split = ft_splitset_lc(NULL, "");
	i = 0;
	while (split[i])
	{
		printf("%s\n", split[i]);
		i++;
	}
	printf("========================\n\n");
	printf("ft_splitset_lc(NULL, NULL)\n");
	split = ft_splitset_lc(NULL, NULL);
	i = 0;
	while (split[i])
	{
		printf("%s\n", split[i]);
		i++;
	}
	printf("========================\n\n");
	printf("ft_splitset_lc(NULL, '! ;-')\n");
	split = ft_splitset_lc(NULL, "! ;-");
	i = 0;
	while (split[i])
	{
		printf("%s\n", split[i]);
		i++;
	}
	printf("========================\n\n");
	printf("ft_splitset_lc('! ;-', NULL)\n");
	split = ft_splitset_lc("! ;-", NULL);
	i = 0;
	while (split[i])
	{
		printf("%s\n", split[i]);
		i++;
	}
	printf("========================\n\n");
	printf("ft_splitset_lc(' !;   !!123!456  !78asd  !!!!!', ' !;')\n");
	split = ft_splitset_lc(" !;   !!123!456  !78asd  !!!!!", " !;");
	i = 0;
	while (split[i])
	{
		printf("%s\n", split[i]);
		i++;
	}
	printf("========================\n\n");
	lc(NULL);
	return (0);
}
//gcc -Wall -Wextra -Werror test_ft_splitset_lc.c -L../libft -lft -I../libft
