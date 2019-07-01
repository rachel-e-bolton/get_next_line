/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalnum.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rbolton <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/22 14:47:26 by rbolton           #+#    #+#             */
/*   Updated: 2019/05/22 14:49:47 by rbolton          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#define TRUE 1
#define FALSE 0
#include "libft.h"

int	ft_isalnum(int c)
{
	if (ft_isalpha(c) == TRUE || ft_isdigit(c) == TRUE)
		return (TRUE);
	else
		return (FALSE);
}
