/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rbolton <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/30 17:15:50 by rbolton           #+#    #+#             */
/*   Updated: 2019/05/30 17:48:30 by rbolton          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t dstsize)
{
	size_t	len_dst;
	size_t	len_src;

	len_dst = 0;
	len_src = 0;
	while (dst[len_dst] != '\0' && len_dst < dstsize)
		len_dst++;
	while (len_dst + len_src + 1 < dstsize && src[len_src] != '\0')
	{
		dst[len_dst + len_src] = src[len_src];
		len_src++;
	}
	if (len_dst + len_src < dstsize)
		dst[len_dst + len_src] = '\0';
	return (len_dst + ft_strlen(src));
}
