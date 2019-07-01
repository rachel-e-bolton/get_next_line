/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstiter.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rbolton <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/06/11 14:29:23 by rbolton           #+#    #+#             */
/*   Updated: 2019/06/11 14:34:49 by rbolton          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstiter(t_list *lst, void (*f)(t_list *elem))
{
	t_list	*elem;
	t_list	*next;

	elem = NULL;
	next = NULL;
	if (lst == NULL)
		return ;
	elem = lst;
	while (elem != NULL)
	{
		next = elem->next;
		f(elem);
		elem = next;
	}
}
