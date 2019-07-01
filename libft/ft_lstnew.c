/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstnew.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rbolton <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/06/11 09:03:09 by rbolton           #+#    #+#             */
/*   Updated: 2019/06/11 11:27:24 by rbolton          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstnew(void const *content, size_t content_size)
{
	t_list	*tmp;

	tmp = (t_list *)malloc(sizeof(*tmp));
	if (tmp == NULL)
		return (NULL);
	if (!(content))
	{
		tmp->content = NULL;
		tmp->content_size = 0;
	}
	else
	{
		if ((tmp->content = (void *)malloc(content_size)) == NULL)
		{
			free(tmp);
			return (NULL);
		}
		ft_memcpy(tmp->content, content, content_size);
		tmp->content_size = content_size;
	}
	tmp->next = NULL;
	return (tmp);
}
