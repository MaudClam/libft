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
	char 	*s = "   1!2; 3 456 ";
	char	**split;
	int		i = 0;
	
	split = ft_splitset_lc(s, " !,;");
	while (split[i])
	{
		printf("%s %lu\n", split[i], ft_strlen(s));
		i++;
	}
//	write(1, split, ft_strlen(s));
	lc(NULL);
	return (0);
}
