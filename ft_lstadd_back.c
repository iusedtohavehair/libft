/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_back.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: christophechouinard <christophechouinar    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/17 11:19:25 by cchouina          #+#    #+#             */
/*   Updated: 2023/01/19 15:29:19 by christophec      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstadd_back(t_list **lst, t_list *new)
{
	t_list	*head;

	if (*lst)
	{
		head = ft_lstlast(*lst);
		head->next = new;
	}
	else
		*lst = new;
}
