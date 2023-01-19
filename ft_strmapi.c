/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: christophechouinard <christophechouinar    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/19 14:54:16 by christophec       #+#    #+#             */
/*   Updated: 2023/01/19 14:54:51 by christophec      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	int				len;
	unsigned int	index;
	char			*modified;

	if (!s || !f)
		return (NULL);
	index = 0;
	len = ft_strlen((char *)s);
	modified = malloc(sizeof(char) * (len + 1));
	if (!modified)
		return (NULL);
	while (s[index] != '\0')
	{
		modified[index] = (*f)(index, s[index]);
		index++;
	}
	modified[index] = '\0';
	return (modified);
}
