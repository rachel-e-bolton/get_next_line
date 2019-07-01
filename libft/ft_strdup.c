/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rbolton <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/29 17:09:34 by rbolton           #+#    #+#             */
/*   Updated: 2019/05/29 17:41:14 by rbolton          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(const char *s1)
{
	char		*s2;
	char		*ptr_s1;
	int			i;

	s2 = (char *)malloc((ft_strlen(s1) + 1) * sizeof(*s2));
	ptr_s1 = (char *)s1;
	i = 0;
	if (!(s2 == NULL))
	{
		while (ptr_s1[i] != '\0')
		{
			s2[i] = ptr_s1[i];
			i++;
		}
		s2[i] = '\0';
		return (s2);
	}
	else
	{
		return (NULL);
	}
}
