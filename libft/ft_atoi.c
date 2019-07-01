/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rbolton <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/24 15:07:35 by rbolton           #+#    #+#             */
/*   Updated: 2019/05/28 11:23:04 by rbolton          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#define TRUE 1
#define FALSE 0
#include "libft.h"

int	ft_atoi(char const *str)
{
	int			i;
	long int	ans;
	int			sign;

	i = 0;
	ans = 0;
	sign = 1;
	while (ft_isspace(str[i]) == TRUE)
		i++;
	(((str[i] == '-') && (ft_isdigit(str[i + 1]) == TRUE)) ?
		((sign = -1)) && i++ : i);
	(((str[i] == '+') && (ft_isdigit(str[i + 1]) == TRUE)) ?
		((sign = 1) && i++) : i);
	while (ft_isdigit(str[i]) == TRUE)
	{
		ans = (ans * 10) + (str[i] - '0');
		i++;
	}
	return (ans * sign);
}

/*
** 469762049 is the overflow for long max
*/
