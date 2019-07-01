/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalpha.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rbolton <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/21 18:12:18 by rbolton           #+#    #+#             */
/*   Updated: 2019/05/21 18:18:58 by rbolton          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#define TRUE 1
#define FALSE 0
#include "libft.h"

int	ft_isalpha(int c)
{
	if (ft_isupper(c) == TRUE || ft_islower(c) == TRUE)
		return (TRUE);
	else
		return (FALSE);
}
