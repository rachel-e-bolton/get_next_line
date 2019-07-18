/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line_2.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rbolton <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/18 16:40:39 by rbolton           #+#    #+#             */
/*   Updated: 2019/07/18 17:20:00 by rbolton          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"
#include "./libft/libft.h"


static int	get_line(char *store, char **line, int ret)
{
	return (1);
}

static int	result(char *store, char **line, int ret)
{
	if (ret < 0)
		return (-1);
	//else if (ret == 0 && (
}

int	get_next_line(int fd, char **line)
{
	static char	*store[FD_MAX + 1];
	char		buffer[BUFF_SIZE + 1];
	char		*temp;
	int			ret;

	if	(fd < 0 || fd > FD_MAX || BUFF_SIZE < 1 || !line)
		return (-1);
	if (!store[fd])
		store[fd] = ft_strnew(1);
	while ((ret = read(fd, buffer, BUFF_SIZE)) > 0)
	{
		temp = ft_strjoin(store[fd], buffer);
		free(store[fd]);
		store[fd] = ft_strdup(temp);
		free(temp);
		if ((ft_strchr(buffer, '\n')))
			break ;
	}
	return (result(store[fd], line, ret));
}
