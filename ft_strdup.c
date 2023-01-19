/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cchouina <cchouina@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/17 14:48:41 by cchouina          #+#    #+#             */
/*   Updated: 2023/01/17 14:48:48 by cchouina         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(const char *s1)
{
	int		len;
	char	*ptr_malloc;

	if (!s1)
		return (NULL);
	len = ft_strlen(s1) + 1;
	ptr_malloc = (char *)malloc(sizeof(char) * len);
	if (!ptr_malloc)
		return (NULL);
	ft_strlcpy(ptr_malloc, s1, len);
	return (ptr_malloc);
}
