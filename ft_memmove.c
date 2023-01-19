/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cchouina <cchouina@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/17 11:50:41 by cchouina          #+#    #+#             */
/*   Updated: 2023/01/17 11:50:55 by cchouina         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dst, const void *src, size_t len)
{
	unsigned char	*dest_ptr;
	unsigned char	*src_ptr;

	if (!dst || !src)
		return (0);
	src_ptr = (unsigned char *)src;
	dest_ptr = (unsigned char *)dst;
	if (src_ptr < dest_ptr)
	{
		while (len--)
			*(dest_ptr + len) = *(src_ptr + len);
	}
	else if (src_ptr > dest_ptr)
	{
		while (len--)
			*dest_ptr++ = *src_ptr++;
	}
	return (dst);
}
