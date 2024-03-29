/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rbolton <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/15 16:24:02 by rbolton           #+#    #+#             */
/*   Updated: 2019/07/18 16:17:52 by rbolton          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"
#include "./libft/libft.h"

static int	get_line(char **store, char **line, int ret)
{
	char		*new_line_char;
	char		*temp;

	if (store && (!(new_line_char = ft_strchr(*store, '\n')))
			&& ret < BUFF_SIZE)
	{
		*line = ft_strdup(*store);
	}
	else if (!store || (!(new_line_char = ft_strchr(*store, '\n'))))
		return (-1);
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

static int	result(char **store, char **line, int ret)
{
	if (ret < 0)
		return (-1);
	else if (ret == 0 && (*store == '\0' || !*store))
		return (0);
	return (get_line(store, line, ret));
}

int			get_next_line(int fd, char **line)
{
	static char	*store;
	char		buffer[BUFF_SIZE + 1];
	char		*temp;
	int			ret;

	if (fd < 0 || BUFF_SIZE < 1 || !line)
		return (-1);
	if (!store)
		store = ft_strnew(1);
	while ((!(ft_strchr(store, '\n'))) && ret >= 0)
	{
		ft_memset(buffer, '\0', (BUFF_SIZE + 1));
		ret = read(fd, buffer, BUFF_SIZE);
		temp = ft_strjoin(store, buffer);
		free(store);
		store = ft_strdup(temp);
		free(temp);
		if (ret == 0)
			break ;
	}
	return (result(&store, line, ret));
}
