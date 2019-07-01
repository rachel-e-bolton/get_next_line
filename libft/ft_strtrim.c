/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rbolton <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/06/03 16:05:13 by rbolton           #+#    #+#             */
/*   Updated: 2019/06/03 18:15:42 by rbolton          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#define TRUE 1
#define FALSE 2
#include "libft.h"

char	*ft_strtrim(char const *s)
{
	size_t	front;
	size_t	back;
	char	*s2;

	front = 0;
	back = 0;
	if (s == NULL)
		return (NULL);
	s2 = ft_strrev((char *)s);
	if (s2 == NULL)
		return (NULL);
	while (ft_iswhitespace(s[front]) == TRUE && s[front] != '\0')
		front++;
	while (ft_iswhitespace(s2[back]) == TRUE && s2[back] != '\0')
		back++;
	if (s[front + 1] == '\0' || s2[back + 1] == '\0')
		return ((char *)ft_memset((void *)s2, '\0', (ft_strlen(s2) + 1)));
	ft_memset((void *)s2, '\0', (ft_strlen(s2) + 1));
	ft_strncpy(s2, s + front, (ft_strlen(s) - front - back));
	return (s2);
}
