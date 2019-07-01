/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rbolton <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/31 09:52:45 by rbolton           #+#    #+#             */
/*   Updated: 2019/06/11 16:16:52 by rbolton          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_strcmp(const char *s1, const char *s2)
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
	while (ptr_s1[i] == ptr_s2[i] && len_s1-- > 1 && len_s2-- > 1)
		i++;
	if ((ptr_s1[i] - ptr_s2[i]) == 0)
		return (0);
	else if ((ptr_s1[i] - ptr_s2[i]) < 0)
		return (-1);
	else if ((ptr_s1[i] - ptr_s2[i]) > 0)
		return (1);
	return (0);
}
