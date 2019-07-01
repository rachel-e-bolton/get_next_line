/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rbolton <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/06/03 08:49:32 by rbolton           #+#    #+#             */
/*   Updated: 2019/06/03 09:23:19 by rbolton          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *haystack, const char *needle, size_t len)
{
	size_t	i;
	size_t	j;

	i = 0;
	if (needle[0] == '\0')
		return ((char *)haystack);
	if (*needle && len)
	{
		while (haystack[i] != '\0' && i < len)
		{
			j = 0;
			while (haystack[i + j] == needle[j] &&
					haystack[i + j] != '\0' && i + j < len)
			{
				if (needle[j + 1] == '\0')
					return ((char *)(haystack + i));
				j++;
			}
			i++;
		}
	}
	return (NULL);
}
