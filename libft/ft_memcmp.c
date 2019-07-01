/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rbolton <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/29 16:31:26 by rbolton           #+#    #+#             */
/*   Updated: 2019/05/29 17:01:59 by rbolton          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	int				i;
	int				diff;
	unsigned char	*ptr_s1;
	unsigned char	*ptr_s2;

	i = 0;
	diff = 0;
	ptr_s1 = (unsigned char *)s1;
	ptr_s2 = (unsigned char *)s2;
	while (n--)
	{
		if (ptr_s1[i] == ptr_s2[i])
			i++;
		else
			return (diff = (unsigned char)ptr_s1[i] - (unsigned char)ptr_s2[i]);
	}
	return (0);
}
