/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isspace2.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rbolton <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/23 17:59:15 by rbolton           #+#    #+#             */
/*   Updated: 2019/06/03 11:15:12 by rbolton          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#define TRUE 1
#define FALSE 0
#include "libft.h"

int	ft_iswhitespace(int c)
{
	if ((c >= 9 && c <= 10) || c == 32)
		return (TRUE);
	else
		return (FALSE);
}

/*
** ft_isspace2() tests for a
** subset of the whitespace characters:
** "\t", "\n" and " "
*/
