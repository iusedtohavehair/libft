/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cchouina <cchouina@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/17 11:48:23 by cchouina          #+#    #+#             */
/*   Updated: 2023/01/17 11:50:31 by cchouina         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dest, const void *src, size_t n)
{
	unsigned char	*dest_ptr;
	unsigned char	*src_ptr;

	if (!dest)
		return (0);
	src_ptr = (unsigned char *)src;
	dest_ptr = (unsigned char *)dest;
	while (n--)
		dest_ptr[n] = src_ptr[n];
	return (dest);
}
