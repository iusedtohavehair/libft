/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cchouina <cchouina@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/17 11:46:33 by cchouina          #+#    #+#             */
/*   Updated: 2023/01/17 11:46:45 by cchouina         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	const unsigned char	*ptr;
	size_t				index;

	index = 0;
	if (!s)
		return (NULL);
	ptr = (const unsigned char *)s;
	while (index < n)
	{
		if ((unsigned char)c == ptr[index])
			return ((void *)ptr + index);
		index++;
	}
	return (NULL);
}
