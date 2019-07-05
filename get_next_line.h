/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.h                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rbolton <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/06/24 06:36:27 by rbolton           #+#    #+#             */
/*   Updated: 2019/07/05 14:39:31 by rbolton          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef GET_NEXT_LINE_H
# define GET_NEXT_LINE_H
# define BUFF_SIZE 1024

int				get_next_line(const int fd, char **line);

typedef	struct	s_line
{
	char		*left_over;
	int			fd;
}				t_line;

#endif
