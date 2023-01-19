/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cchouina <cchouina@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/17 11:57:17 by cchouina          #+#    #+#             */
/*   Updated: 2023/01/17 14:47:42 by cchouina         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	ft_strslen(char const *s, char c)
{
	int	index;
	int	words;

	if (!s)
		return (0);
	index = 0;
	words = 0;
	while (s[index])
	{
		while (s[index] && s[index] == c)
			index++;
		if (s[index])
			words++;
		while (s[index] != c && s[index])
			index++;
	}
	return (words);
}

char	**clean_array(char **to_clean)
{
	int	index;

	index = 0;
	while (to_clean[index])
	{
		free(to_clean[index]);
		index++;
	}
	free(to_clean);
	return (NULL);
}

char	**create_array(char *s, char c, char **array)
{
	int		index;
	int		array_index;
	int		count;

	count = 0;
	array_index = 0;
	index = 0;
	while (s[index])
	{
		while (s[index] == c && s[index])
			index++;
		if (s[index])
		{
			count = index;
			while (s[index] && s[index] != c)
				index++;
			array[array_index] = ft_substr(s, count, index - count);
			if (!array[array_index])
				return (clean_array(array));
			array_index++;
		}
	}
	return (array);
}

char	**ft_split(char const *s, char c)
{
	int		words;
	char	**array;

	words = ft_strslen(s, c);
	array = ft_calloc((words + 1), sizeof(char *));
	if (!array || !s)
		return (NULL);
	return (create_array((char *)s, c, array));
}
