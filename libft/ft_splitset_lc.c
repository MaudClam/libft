/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_splitset_lc.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mclam <mclam@student.21-school.ru>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/06 14:06:09 by mclam             #+#    #+#             */
/*   Updated: 2021/10/06 14:06:35 by mclam            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
** Allocates (with malloc(3)) and returns an array of strings obtained by
** splitting the 's' using the characters from the set 'set' as delimiters.
** The array must be terminated with a NULL pointer. Memory leaks monitored
** by the lc() function.
** Parameter1: The string to be split.
** Parameter2: Separator character set.
** Return value: The array of new strings resulting from the split. NULL if
** the allocation fails.
*/
static char	*fill_str(char const *s, char const *set, char *str)
{
	int		i;
	int		j;

	i = 0;
	j = 0;
	while (ft_isinset(s[i], set))
		i++;
	while (s[i])
	{
		if (!ft_isinset(s[i], set))
			str[j++] = s[i++];
		else
		{
			str[j++] = '\0';
			while (ft_isinset(s[i], set))
				i++;
		}
	}
	str[j] = '\0';
	return (str);
}

static int	split_counter(char const *s, char const *set, int *word_cnt)
{
	int		char_cnt;
	char	flag;
	int		i;

	char_cnt = 0;
	flag = 0;
	i = 0;
	while (s[i])
	{
		if (!ft_isinset(s[i], set))
		{
			char_cnt++;
			if (!flag)
			{
				flag = 1;
				*word_cnt += 1;
			}
		}
		else
			flag = 0;
		i++;
	}
	return (char_cnt);
}

char	**fill_split(char *str, char **split, int word_cnt)
{
	int		i;
	int		j;

	i = 0;
	j = 0;
	split[j++] = &str[i];
	while (j < word_cnt)
	{
		while (str[i])
			i++;
		i++;
		split[j++] = &str[i++];
	}
	split[j] = NULL;
	return (split);
}

char	**ft_splitset_lc(char const *s, char const *set)
{
	int		word_cnt;
	char	*str;
	char	**split;
	
	word_cnt = 0;
	str = lc(malloc(split_counter(s, set, &word_cnt) + word_cnt + 1));
	if (!str)
		return (NULL);
	str = fill_str(s, set, str);
	split = lc(malloc(sizeof(char *) * (word_cnt + 1)));
	if (!split)
		return (NULL);
	split = fill_split(str, split, word_cnt);
	return (split);
}
