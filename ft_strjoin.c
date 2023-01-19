/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: christophechouinard <christophechouinar    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/19 14:45:45 by christophec       #+#    #+#             */
/*   Updated: 2023/01/19 14:49:01 by christophec      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	int		len;
	int		index;
	int		concat_index;
	char	*concat;

	if (!s1 || !s2)
		return (NULL);
	index = 0;
	concat_index = 0;
	len = ft_strlen(s1) + ft_strlen(s2) + 1;
	concat = malloc(sizeof(char) * len);
	if (!concat)
		return (NULL);
	while (s1[index])
		concat[concat_index++] = s1[index++];
	index = 0;
	while (s2[index])
		concat[concat_index++] = s2[index++];
	concat[concat_index] = '\0';
	return (concat);
}
