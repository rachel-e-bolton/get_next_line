/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line_2.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rbolton <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/18 16:40:39 by rbolton           #+#    #+#             */
/*   Updated: 2019/07/20 15:20:33 by rbolton          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"
#include "./libft/libft.h"

static int	get_line(char **store, char **line, int ret, int fd)
{
	char	*new_line_char;
	char	*temp;

	if (!*store || (!(new_line_char = ft_strchr(*store, '\n'))))
		return (-1);
	else if (!new_line_char && (temp = ft_strchr(*store, '\0')))
	{
		if (ret == BUFF_SIZE && fd >= 0)
			get_next_line(fd, line);
		*line = ft_strdup(*store);
		free(*store);
	}
	else
	{
		*new_line_char = '\0';
		*line = ft_strdup(*store);
		temp = ft_strdup(new_line_char + 1);
		free(*store);
		*store = ft_strdup(temp);
		free(temp);
	}
	return (1);
}

static int	result(char **store, char **line, int ret, int fd)
{
	if (ret < 0)
		return (-1);
	else if (ret == 0 && (*store == '\0' || !*store))
		return (0);
	return (get_line(store, line, ret, fd));
}

int			get_next_line(int fd, char **line)
{
	static char	*store[FD_MAX + 1];
	char		buffer[BUFF_SIZE + 1];
	char		*temp;
	int			ret;

	if (fd < 0 || fd > FD_MAX || BUFF_SIZE < 1 || !line)
		return (-1);
	store[FD_MAX] = NULL;
	ft_memset(buffer, '\0', (BUFF_SIZE + 1));
	if (!store[fd])
		store[fd] = ft_strnew(1);
	while ((ret = read(fd, buffer, BUFF_SIZE)) > 0)
	{
		temp = ft_strjoin(store[fd], buffer);
		free(store[fd]);
		store[fd] = ft_strdup(temp);
		free(temp);
		if (ft_strchr(buffer, '\n'))
			break ;
	}
	return (result(&store[fd], line, ret, fd));
}
