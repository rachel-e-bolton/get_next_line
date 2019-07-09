/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rbolton <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/06/24 06:36:06 by rbolton           #+#    #+#             */
/*   Updated: 2019/07/09 15:06:14 by rbolton          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"
#include "./libft/libft.h"

/*
 * CREATE A NEW LIST STRUCT SPECIFICALLY FOR GNL THAT CONTAINS THE LEFT_OVER AND FD VARIABLES.
 * USE ft_SPTRSPLIT to both check for '/n' and split the line.
 */

static t_line	*create_node(char *left_over, int fd)
{
	t_line	*tmp;

	if ((tmp = (t_line *)malloc(sizeof(*tmp))) == NULL || fd < 0)
		return (NULL);
	if (!(left_over))
	{
		tmp->left_over = NULL;
		tmp->fd = fd;
	}
	else
	{
		if ((tmp->left_over = ft_strnew(ft_strlen(left_over))) == NULL)
		{
			free(tmp);
			return (NULL);
		}
		ft_memcpy(tmp->left_over, left_over, ft_strlen(left_over));
		tmp->fd = fd;
	}
	tmp->next = NULL;
	return (tmp);
}

static t_line	*find_excess(t_line *master, int fd) 
{
	t_line	*current_node;

	current_node = NULL;
	if (master == NULL || fd < 0)
		return (NULL);
	current_node = master;
	while (current_node->next != NULL)
	{
		if (current_node->fd == fd)
			return (current_node);
		current_node = current_node->next;
	}
	if (current_node->fd == fd)
		return (current_node);
	else 
		return (NULL);
}

static void	store_excess(t_line *current_node, char *left_over)
{
	if ((current_node == NULL) || (left_over == NULL))
		return;
	else
	{
		free(current->left_over);
		current_node->left_over = (ft_strdup((const char *)left_over));
	}
}

int			perform_checks()
{

}

int			get_next_line(const int fd, char **line)
{
	int				read_return;
	static t_line	*master;
	t_line			*tmp_line;
	char			*buffer;
	char			*tmp;

	read_return = -1;
	master = NULL;
	buffer = NULL;
	if ((fd == -1) || (line == NULL) || (BUFF_SIZE <= 0))
		return (-1);
	if (master == NULL)
		if ((master = (t_line *)malloc(sizeof(*master))) == NULL)
			return (-1);
	if (fd >= 0 && line != NULL)
		if (buffer == NULL)
			if ((buffer = ft_strnew(BUFF_SIZE + 1)) == NULL)
				return (-1);
	read_return = read(fd, buffer, BUFF_SIZE);
	*line = ft_strjoin

	return (0);
}

/*
 * Function 1 - create_node;
 * Function 2 - find_excess;
	 iterate through the list, to find the t_line with the correct fd
	 return a pointer to left_over as stored in the t_line with the correct fd
 * Function 3 - store_excess; 
	 look for node within master where current_node->fd is same as passed.
	 if found, free what ever current_node->left_over currently points to as it should have been used before this function call 
	 and set current_node->left_over to point to whatever tmp points to.
	 set tmp to point to NULL;
	 if not found, create new t_line and t_list, set new t_list content to be this t_line element - content size == sizeof(t_line);
	 set current_node->next (which should be null at this point) to equal the new t_list element.
 * Function 4 
 * Function 5 
 */

