/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: christophechouinard <christophechouinar    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/19 14:49:28 by christophec       #+#    #+#             */
/*   Updated: 2023/01/19 14:51:36 by christophec      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t size)
{
	size_t	index;
	size_t	src_index;
	size_t	src_len;
	size_t	dst_len;

	if (!src || !dst)
		return (0);
	if (dst == NULL && size == 0)
		return (ft_strlen(src));
	src_index = 0;
	dst_len = ft_strlen(dst);
	src_len = ft_strlen(src);
	index = dst_len;
	if (size == 0 || size < dst_len)
		return (src_len + size);
	else
	{
		while (src[src_index] && (dst_len + src_index) < size)
			dst[index++] = src[src_index++];
		if ((dst_len + src_index) == size && dst_len < size)
			dst[--index] = '\0';
		else
			dst[index] = '\0';
		return (src_len + dst_len);
	}
}
