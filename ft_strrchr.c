/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: christophechouinard <christophechouinar    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/19 15:00:44 by christophec       #+#    #+#             */
/*   Updated: 2023/01/19 15:01:52 by christophec      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	size_t	len;
	char	*ptr;

	if (!s)
		return (NULL);
	len = ft_strlen(s);
	ptr = (char *)s;
	while (len > 0)
	{
		if ((char)c == s[len])
		{
			ptr += len;
			return (ptr);
		}
		len--;
	}
	if (s[len] == (char)c)
		return (ptr + len);
	return (NULL);
}
