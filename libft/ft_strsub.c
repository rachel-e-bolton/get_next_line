/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strsub.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rbolton <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/06/03 11:32:11 by rbolton           #+#    #+#             */
/*   Updated: 2019/06/03 12:01:14 by rbolton          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strsub(char const *s, unsigned int start, size_t len)
{
	char	*ptr;

	ptr = (char *)malloc((len + 1) * sizeof(*ptr));
	if (ptr == NULL)
		return (NULL);
	if (s && start >= 0 && len)
	{
		ft_memcpy(ptr, s + start, len);
		ptr[len] = '\0';
	}
	return (ptr);
}
