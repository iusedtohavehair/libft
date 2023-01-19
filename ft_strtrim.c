/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: christophechouinard <christophechouinar    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/19 15:02:04 by christophec       #+#    #+#             */
/*   Updated: 2023/01/19 15:07:15 by christophec      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	check_char(char ch, char const *set)
{
	int	index;

	index = 0;
	while (set[index])
	{
		if (ch == set[index])
			return (1);
		index++;
	}
	return (0);
}

char	*ft_strtrim(char const *s1, char const *set)
{
	int		start;
	int		end;
	char	*new_str;

	if (!s1 || !set)
		return (NULL);
	start = 0;
	end = ft_strlen(s1) - 1;
	while (check_char(s1[start], set) && s1[start])
		start++;
	if (start > end)
		return (ft_strdup(&s1[end + 1]));
	while (check_char(s1[end], set) && end > start)
		end--;
	new_str = (char *)malloc(sizeof(char) * (end - start + 2));
	if (!new_str)
		return (NULL);
	ft_strlcpy(new_str, &s1[start], (end - start + 2));
	return (new_str);
}
