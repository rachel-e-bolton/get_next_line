/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rbolton <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/06/24 06:36:06 by rbolton           #+#    #+#             */
/*   Updated: 2019/07/05 17:35:57 by rbolton          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"
#include "./libft/libft.h"

/*
 * CREATE A NEW LIST STRUCT SPECIFICALLY FOR GNL THAT CONTAINS THE LEFT_OVER AND FD VARIABLES.
 * USE ft_SPTRSPLIT to both check for '/n' and split the line.
 */

static void	store_excess(t_list *master, int fd, char *tmp)
{
	/* 
	 * look for node within master where current_node->content->(t_line)fd is same as passed.
	 * if found, free what ever current_node->content->(t_line)left_over currently points to as it should have been used before this function call 
	 * and set current_node->content->(t_line)left_over to point to whatever tmp points to.
	 * set tmp to point to NULL;
	 *
	 * if not found, create new t_line and t_list, set new t_list content to be this t_line element - content size == sizeof(t_line);
	 * set current_node->next (which should be null at this point) to equal the new t_list element.
	 */
}

static char	*find_excess(t_list *master, int fd)
{
	t_list	*current_node;

	current_node = NULL;
	if (master == NULL || fd < 0)
		return ((char *)current_node);
	current_node = master;
	while (current_node->next != NULL)
	{
		if (current_node->content->fd == fd)
			return (&(current_node->content->left_over));
		current_node = current_node->next;
	}
	if (current_node->content->fd == fd)
		return (&(current_node->content->left_over));
	else 
		return ((char *)(current_node = NULL));
	/* 
	 * iterate through the list, to find the t_line with the correct fd
	 * return a pointer to left_over as stored in the t_line with the correct fd
	 */
}

int			get_next_line(const int fd, char **line)
{
	/*
	int				read_return;
	static t_list	*master;
	char			*buffer;
	char			*ptr;
	char			*tmp;
	size_t			i;
	*/

	return (0);
}
