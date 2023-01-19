/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cchouina <cchouina@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/17 11:03:23 by cchouina          #+#    #+#             */
/*   Updated: 2023/01/17 11:10:41 by cchouina         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_atoi(const char *str)
{
	int	i;
	int	minus;
	int	new_int;

	if (!str)
		return (0);
	new_int = 0;
	i = 0;
	minus = 1;
	while (str[i] == ' ' || str[i] == '\n' || str[i] == '\t' || str[i] == '\v'
		|| str[i] == '\f' || str[i] == '\r')
		i++;
	if (str[i] == '-' || str[i] == '+')
	{
		if (str[i] == '-')
			minus = -1;
		i++;
	}
	while (ft_isdigit(str[i]))
	{
		new_int = new_int * 10 + str[i] - 48;
		i++;
	}
	return (new_int * minus);
}

// int main()
// {
// 	char a[] = ": 58";
// 	int b = ft_atoi(a);
// 	int c = atoi(a);
// 	printf("%d\n", b);
// 	printf("%d\n", c);
// }