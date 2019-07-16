/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rbolton <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/15 16:35:25 by rbolton           #+#    #+#             */
/*   Updated: 2019/07/16 15:06:39 by rbolton          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <string.h>
#include <fcntl.h>
#include "get_next_line.h"

int     main(void)
{
    int     fd;
    int     ret;
    char    *line;

	line = (char *)malloc(1);
    if ((fd = open("main.c", O_RDONLY)) < 3 && fd != 0)
        return (-1);
    printf("%d\n", fd);
    while ((ret = get_next_line(fd, &line)) > 0)
        printf("%d - %s\n", ret, line);
    return (0);
}