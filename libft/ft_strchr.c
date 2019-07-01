/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rbolton <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/30 17:55:03 by rbolton           #+#    #+#             */
/*   Updated: 2019/05/31 09:15:55 by rbolton          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strchr(const char *s, int c)
{
	int	i;
	int n;

	i = -1;
	n = (int)(ft_strlen(s) + 1);
	while (i++ < n && *(s + i) != '\0')
	{
		if (*(s + i) == c)
			return ((char *)s + i);
	}
	if (*(s + i) == c)
		return ((char *)s + i);
	return (0);
}
