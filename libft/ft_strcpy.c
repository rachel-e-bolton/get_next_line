/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rbolton <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/29 17:49:34 by rbolton           #+#    #+#             */
/*   Updated: 2019/05/29 18:10:33 by rbolton          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strcpy(char *dst, const char *src)
{
	char	*ptr_src;
	int		i;

	ptr_src = (char *)src;
	i = 0;
	while (ptr_src[i] != '\0')
	{
		dst[i] = ptr_src[i];
		i++;
	}
	dst[i] = '\0';
	return (dst);
}
