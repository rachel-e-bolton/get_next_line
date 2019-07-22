/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line_2.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rbolton <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/18 16:40:39 by rbolton           #+#    #+#             */
/*   Updated: 2019/07/22 16:27:50 by rbolton          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"
#include "./libft/libft.h"

static int	get_index(char **store, int fd)
{
	int i;

	i = 0;
	while ((store[fd][i] != '\n') && (store[fd][i] != '\0'))
		i++;
	return (i);
}

static int	get_line(char **store, char **line, int ret, int fd)
{
	int		i;
	char	*temp;
	char	*new_line_char;

	i = get_index(store, fd);
	if (store[fd][i] == '\n')
	{
		new_line_char = &store[fd][i];
		*new_line_char = '\0';
		*line = ft_strdup(store[fd]);
		temp = ft_strdup(new_line_char + 1);
		ft_strdel(&store[fd]);
		store[fd] = ft_strdup(temp);
		ft_strdel(&temp);
		if (store[fd][0] == '\0')
			ft_strdel(&store[fd]);
	}
	else if (store[fd][i] == '\0')
	{
		if (ret == BUFF_SIZE)
			return (get_next_line(fd, line));
		*line = ft_strdup(store[fd]);
		ft_strdel(&store[fd]);
	}
	return (1);
}

/*
**static int	get_line(char **store, char **line, int ret, int fd)
**{
**	char	*new_line_char;
**	char	*temp;
**
**	new_line_char = ft_strchr(*store, '\n');
**	temp = ft_strchr(*store, '\0');
**	if (!*store || (!new_line_char && !temp))
**		return (-1);
**	if (!new_line_char && temp)
**	{
**		if (ret == BUFF_SIZE)
**			get_next_line(fd, line);
**		*line = ft_strdup(*store);
**		free(*store);
**	}
**	else
**	{
**		*new_line_char = '\0';
**		*line = ft_strdup(*store);
**		temp = ft_strdup(new_line_char + 1);
**		free(*store);
**		*store = ft_strdup(temp);
**		free(temp);
**	}
**	return (1);
**}
*/

int			get_next_line(int fd, char **line)
{
	static char	*store[FD_MAX + 1];
	char		buffer[BUFF_SIZE + 1];
	char		*temp;
	int			ret;

	if (fd < 0 || fd > FD_MAX || BUFF_SIZE < 1 || !line || read(fd, buffer, 0))
		return (-1);
	store[FD_MAX] = NULL;
	if (!store[fd])
		store[fd] = ft_strnew(1);
	while ((ret = read(fd, buffer, BUFF_SIZE)) > 0)
	{
		buffer[ret] = '\0';
		temp = ft_strjoin(store[fd], buffer);
		free(store[fd]);
		store[fd] = ft_strdup(temp);
		free(temp);
		if (ft_strchr(buffer, '\n'))
			break ;
	}
	if (ret < 0)
		return (-1);
	else if ((ret == 0 && store[fd] == NULL) || store[fd][0] == '\0')
		return (0);
	return (get_line(store, line, ret, fd));
}
