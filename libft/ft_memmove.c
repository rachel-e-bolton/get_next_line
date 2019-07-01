/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rbolton <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/29 13:45:20 by rbolton           #+#    #+#             */
/*   Updated: 2019/05/29 15:56:03 by rbolton          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dst, const void *src, size_t len)
{
	char		*ptr;
	const char	*ptr2;

	ptr = dst;
	ptr2 = src;
	if (dst == NULL && src == NULL && len > 0)
		return (NULL);
	if (ptr == ptr2)
		return (dst);
	else if (ptr2 < ptr)
		while (len--)
			ptr[len] = ptr2[len];
	else
		while (len--)
			*ptr++ = *ptr2++;
	return (dst);
}
