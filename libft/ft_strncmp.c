/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rbolton <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/31 10:10:40 by rbolton           #+#    #+#             */
/*   Updated: 2019/06/11 16:11:57 by rbolton          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_strncmp(const char *s1, const char *s2, size_t n)
{
	int				i;
	int				len_s1;
	int				len_s2;
	unsigned char	*ptr_s1;
	unsigned char	*ptr_s2;

	i = 0;
	len_s1 = (int)ft_strlen(s1) + 1;
	len_s2 = (int)ft_strlen(s2) + 1;
	ptr_s1 = (unsigned char *)s1;
	ptr_s2 = (unsigned char *)s2;
	if (!(n == 0))
	{
		while (ptr_s1[i] == ptr_s2[i] && len_s1-- > 1
				&& len_s2-- > 1 && n-- > 1)
			i++;
		if ((ptr_s1[i] - ptr_s2[i]) == 0)
			return (0);
		else if ((ptr_s1[i] - ptr_s2[i]) < 0)
			return (-1);
		else if ((ptr_s1[i] - ptr_s2[i]) > 0)
			return (1);
	}
	return (0);
}
