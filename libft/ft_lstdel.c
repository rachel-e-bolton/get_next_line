/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstdel.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rbolton <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/06/11 13:02:50 by rbolton           #+#    #+#             */
/*   Updated: 2019/06/11 13:23:56 by rbolton          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstdel(t_list **alst, void (*del)(void *, size_t))
{
	t_list	*strt;
	t_list	*next;

	strt = NULL;
	next = NULL;
	if (alst == NULL || del == NULL)
		return ;
	strt = *alst;
	while (strt != NULL)
	{
		next = strt->next;
		del(strt->content, strt->content_size);
		free(strt);
		strt = next;
	}
	*alst = NULL;
}
