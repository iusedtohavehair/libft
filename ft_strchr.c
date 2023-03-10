/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cchouina <cchouina@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/17 14:47:56 by cchouina          #+#    #+#             */
/*   Updated: 2023/01/17 14:48:25 by cchouina         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strchr(const char *s, int c)
{
	int	index;

	index = 0;
	if (!s)
		return (NULL);
	while (s[index])
	{
		if (s[index] == (char)c)
			return ((char *)s + index);
		index++;
	}
	if (s[index] == (char)c)
		return ((char *)s + index);
	return (NULL);
}
