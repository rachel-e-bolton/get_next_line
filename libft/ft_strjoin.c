/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rbolton <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/06/03 14:54:21 by rbolton           #+#    #+#             */
/*   Updated: 2019/06/03 15:45:54 by rbolton          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	size_t	len_s1;
	size_t	len_s2;
	size_t	i;
	size_t	j;
	char	*dst;

	i = 0;
	j = 0;
	if (s1 == NULL || s2 == NULL)
		return (NULL);
	len_s1 = ft_strlen(s1);
	len_s2 = ft_strlen(s2);
	dst = (char *)malloc((len_s1 + len_s2 + 1) * sizeof(*dst));
	if (dst == NULL)
		return (NULL);
	ft_memset(dst, '\0', (len_s1 + len_s2 + 1));
	ft_strncpy(dst, s1, len_s1);
	ft_strncpy(dst + len_s1, s2, len_s2);
	return (dst);
}
