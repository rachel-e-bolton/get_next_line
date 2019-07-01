/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rbolton <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/29 18:12:57 by rbolton           #+#    #+#             */
/*   Updated: 2019/05/30 13:13:55 by rbolton          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strncpy(char *dst, const char *src, size_t len)
{
	size_t	src_len;

	src_len = ft_strlen(src);
	if (src_len < len)
	{
		ft_memcpy(dst, src, src_len);
		ft_memset(dst + src_len, '\0', len - src_len);
	}
	else
		ft_memcpy(dst, src, len);
	return (dst);
}
