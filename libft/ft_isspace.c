/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isspace.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rbolton <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/28 11:23:55 by rbolton           #+#    #+#             */
/*   Updated: 2019/05/28 11:24:27 by rbolton          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#define TRUE 1
#define FALSE 0
#include "libft.h"

int	ft_isspace(int c)
{
	if ((c >= 9 && c <= 13) || c == 32)
		return (TRUE);
	else
		return (FALSE);
}

/*
** ft_isspace1() tests for the
** full set of whitespace characters:
** "\t", "\v", "\n", "\f", "\r" and " "
*/
