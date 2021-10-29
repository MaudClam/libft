/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   tedt_substr.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mclam <mclam@student.21-school.ru>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/23 05:34:26 by mclam             #+#    #+#             */
/*   Updated: 2021/10/23 05:34:26 by mclam            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	main(void)
{
	char	*substr;
	
	substr = ft_substr("0123456789", 0, 0);
	printf("ft_substr(\"0123456789\", 0, 0)='%s'\n", substr);
	free (substr);

	substr = ft_substr("0123456789", 0, 1);
	printf("ft_substr(\"0123456789\", 0, 1)='%s'\n", substr);
	free (substr);

	substr = ft_substr("0123456789", 0, 2);
	printf("ft_substr(\"0123456789\", 0, 2)='%s'\n", substr);
	free (substr);

	substr = ft_substr("0123456789", 0, 9);
	printf("ft_substr(\"0123456789\", 0, 9)='%s'\n", substr);
	free (substr);

	substr = ft_substr("0123456789", 0, 10);
	printf("ft_substr(\"0123456789\", 0, 10)='%s'\n", substr);
	free (substr);

	substr = ft_substr("0123456789", 0, 11);
	printf("ft_substr(\"0123456789\", 0, 11)='%s'\n", substr);
	free (substr);

	substr = ft_substr("0123456789", 0, 12);
	printf("ft_substr(\"0123456789\", 0, 12)='%s'\n", substr);
	free (substr);

	substr = ft_substr("0123456789", 12, 12);
	printf("ft_substr(\"0123456789\", 12, 12)='%s'\n", substr);
	free (substr);

	substr = ft_substr("0123456789", 11, 12);
	printf("ft_substr(\"0123456789\", 11, 12)='%s'\n", substr);
	free (substr);

	substr = ft_substr("0123456789", 10, 12);
	printf("ft_substr(\"0123456789\", 10, 12)='%s'\n", substr);
	free (substr);

	substr = ft_substr("0123456789", 9, 12);
	printf("ft_substr(\"0123456789\", 9, 12)='%s'\n", substr);
	free (substr);

	substr = ft_substr("0123456789", 8, 11);
	printf("ft_substr(\"0123456789\", 8, 11)='%s'\n", substr);
	free (substr);

	substr = ft_substr("0123456789", 8, 10);
	printf("ft_substr(\"0123456789\", 8, 10)='%s'\n", substr);
	free (substr);

	substr = ft_substr("0123456789", 8, 9);
	printf("ft_substr(\"0123456789\", 8, 9)='%s'\n", substr);
	free (substr);

	substr = ft_substr("0123456789", 8, 8);
	printf("ft_substr(\"0123456789\", 8, 8)='%s'\n", substr);
	free (substr);

	substr = ft_substr("0123456789", 8, 2);
	printf("ft_substr(\"0123456789\", 8, 2)='%s'\n", substr);
	free (substr);

	substr = ft_substr("0123456789", 8, 1);
	printf("ft_substr(\"0123456789\", 8, 1)='%s'\n", substr);
	free (substr);

	substr = ft_substr("0123456789", 8, 0);
	printf("ft_substr(\"0123456789\", 8, 0)='%s'\n", substr);
	free (substr);

	substr = ft_substr("0123456789", -8, -8);
	printf("ft_substr(\"0123456789\", -8, -8)='%s'\n", substr);
	free (substr);

	substr = ft_substr("0123456789", 0, -8);
	printf("ft_substr(\"0123456789\", 0, -8)='%s'\n", substr);
	free (substr);

	substr = ft_substr(NULL, 8, 8);
	printf("ft_substr(NULL, 8, 8)='%s'\n", substr);
	free (substr);

	substr = ft_substr(NULL, -8, -8);
	printf("ft_substr(NULL, -8, -8)='%s'\n", substr);
	free (substr);

	substr = ft_substr(NULL, 0, 8);
	printf("ft_substr(NULL, 0, 8)='%s'\n", substr);
	free (substr);

	substr = ft_substr(NULL, 8, 0);
	printf("ft_substr(NULL, 8, 0)='%s'\n", substr);
	free (substr);

	substr = ft_substr(NULL, 0, 0);
	printf("ft_substr(NULL, 0, 0)='%s'\n", substr);
	free (substr);
	
	substr = ft_substr("", 8, 0);
	printf("ft_substr(\"\", 8, 0)='%s'\n", substr);
	free (substr);

	substr = ft_substr("", 0, 0);
	printf("ft_substr(\"\", 0, 0)='%s'\n", substr);
	free (substr);

	return (0);
}
