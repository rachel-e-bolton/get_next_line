/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rbolton <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/06/11 14:40:13 by rbolton           #+#    #+#             */
/*   Updated: 2019/06/11 15:19:08 by rbolton          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstmap(t_list *lst, t_list *(*f)(t_list *elem))
{
	t_list	*new;
	t_list	*head_new;
	t_list	*temp;

	new = NULL;
	head_new = NULL;
	temp = NULL;
	if (lst == NULL || f == NULL)
		return (new);
	temp = f(lst);
	if ((new = ft_lstnew(temp->content, temp->content_size)) == NULL)
		return (NULL);
	head_new = new;
	lst = lst->next;
	while (lst != NULL)
	{
		temp = f(lst);
		if ((new->next = ft_lstnew(temp->content, temp->content_size)) == NULL)
			return (NULL);
		new = new->next;
		lst = lst->next;
	}
	return (head_new);
}
