/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rbolton <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/28 12:39:23 by rbolton           #+#    #+#             */
/*   Updated: 2019/05/28 17:01:39 by rbolton          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dst, const void *src, size_t n)
{
	unsigned char	*ptr;
	const char		*ptr2;

	ptr = dst;
	ptr2 = src;
	if (dst == NULL && src == NULL && n > 0)
		return (NULL);
	while (n--)
	{
		*ptr++ = (unsigned char)*ptr2++;
	}
	return (dst);
}
