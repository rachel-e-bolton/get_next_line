/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memccpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rbolton <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/28 15:18:34 by rbolton           #+#    #+#             */
/*   Updated: 2019/05/29 16:03:30 by rbolton          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memccpy(void *dst, const void *src, int c, size_t n)
{
	unsigned char	*ptr_dst;
	unsigned char	*ptr_src;
	int				i;

	ptr_dst = (unsigned char *)dst;
	ptr_src = (unsigned char *)src;
	i = 0;
	while (n--)
	{
		ptr_dst[i] = ptr_src[i];
		if (ptr_src[i] == (unsigned char)c)
			return ((char *)ptr_dst + i + 1);
		i++;
	}
	return (NULL);
}
