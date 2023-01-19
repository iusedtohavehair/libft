/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: christophechouinard <christophechouinar    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/19 14:51:52 by christophec       #+#    #+#             */
/*   Updated: 2023/01/19 14:52:33 by christophec      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcpy(char *dst, const char *src, size_t size)
{
	size_t	srclen;
	size_t	index;

	if (!src || !dst)
		return (0);
	srclen = 0;
	index = 0;
	srclen = ft_strlen(src);
	if (size != 0)
	{
		while (src[index] != '\0' && index < (size - 1))
		{
			dst[index] = src[index];
			index++;
		}
		dst[index] = '\0';
	}
	return (srclen);
}
