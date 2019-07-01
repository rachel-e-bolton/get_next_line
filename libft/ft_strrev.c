/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrev.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rbolton <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/06/03 17:01:44 by rbolton           #+#    #+#             */
/*   Updated: 2019/06/03 17:20:49 by rbolton          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrev(char *s)
{
	size_t	i;
	size_t	s_len;
	char	*rev_str;

	i = 0;
	if (s == NULL)
		return (NULL);
	s_len = ft_strlen(s);
	rev_str = (char *)malloc((s_len + 1) * sizeof(*rev_str));
	if (rev_str == NULL)
		return (NULL);
	while (s_len > 0)
	{
		rev_str[i] = s[s_len - 1];
		i++;
		s_len--;
	}
	rev_str[i + 1] = '\0';
	return (rev_str);
}
