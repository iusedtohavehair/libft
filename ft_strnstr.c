/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: christophechouinard <christophechouinar    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/19 14:55:14 by christophec       #+#    #+#             */
/*   Updated: 2023/01/19 14:57:02 by christophec      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *haystack, const char *needle, size_t len)
{
	size_t	index;
	size_t	count;
	char	*ptr_h;
	size_t	needle_len;

	if (haystack == NULL && len == 0)
		return (NULL);
	index = 0;
	needle_len = ft_strlen(needle);
	ptr_h = (char *)haystack;
	if (ptr_h == needle || needle_len == 0)
		return (ptr_h);
	while (ptr_h[index] && index < len)
	{
		count = 0;
		while (ptr_h[index + count] && needle[count]
			&& ptr_h[index + count] == needle[count] && index + count < len)
		count++;
		if (count == needle_len)
			return (index + ptr_h);
		index++;
	}
	return (0);
}
