/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rbolton <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/15 16:24:02 by rbolton           #+#    #+#             */
/*   Updated: 2019/07/15 18:15:26 by rbolton          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"
#include "./libft/libft.h"

static int	get_line(char **store, char **line, int ret)
{
	char		*new_line_char;
	char		*temp;

	if (!store || (!(new_line_char = ft_strchr(*store, '\n'))))
		return (-1);
	*new_line_char = '\0';
	free(*line);
	*line = ft_strdup(*store);
	temp = ft_strdup(new_line_char + 1);
	free(*store);
	*store = ft_strdup(temp);
	free(temp);
	temp = NULL;
	if (ret == 0)
		return (0);
	else
		return (1);
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
		if (ret < BUFF_SIZE)
			buffer[ret] = '\n';
		temp = ft_strjoin(store, buffer);
		free(store);
		store = ft_strdup(temp);
		free(temp);
		temp = NULL;
		if (ret == 0)
			break ;
	}
	if (ret < 0)
		return (-1);
	return (get_line(&store, line, ret));
}
