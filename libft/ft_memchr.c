/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rbolton <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/29 16:07:36 by rbolton           #+#    #+#             */
/*   Updated: 2019/05/29 16:29:07 by rbolton          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	int				i;
	unsigned char	*ptr_s;

	i = 0;
	ptr_s = (unsigned char *)s;
	while (n--)
	{
		if (ptr_s[i] == (unsigned char)c)
			return ((char *)ptr_s + i);
		i++;
	}
	return (NULL);
}
