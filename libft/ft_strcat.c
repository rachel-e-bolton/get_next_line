/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcat.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rbolton <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/30 13:20:51 by rbolton           #+#    #+#             */
/*   Updated: 2019/05/30 13:38:39 by rbolton          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strcat(char *s1, const char *s2)
{
	char	*ptr_s2;
	size_t	len;
	int		i;

	ptr_s2 = (char *)s2;
	len = ft_strlen(s1);
	i = 0;
	while (ptr_s2[i] != '\0')
	{
		s1[len] = ptr_s2[i];
		len++;
		i++;
	}
	s1[len] = '\0';
	return (s1);
}
