/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strsplit.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rbolton <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/06/05 13:53:29 by rbolton           #+#    #+#             */
/*   Updated: 2019/06/12 11:54:44 by rbolton          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#define TRUE 1
#define FALSE 0
#include "libft.h"

static size_t	ft_wordcnt(const char *s, char c)
{
	size_t	i;
	size_t	count;

	i = 0;
	count = 0;
	while (s[i] != '\0')
	{
		while (s[i] == c)
			i++;
		if (s[i] != c && s[i] != '\0')
			count++;
		while (s[i] != c && s[i] != '\0')
			i++;
	}
	return (count);
}

static size_t	ft_wordlen(const char *s, char c)
{
	size_t	i;
	size_t	length;

	i = 0;
	length = 0;
	while (s[i] != c)
	{
		length++;
		i++;
	}
	return (length);
}

static char		**ft_splitter(char **arr, const char *s, char c)
{
	size_t	i;
	size_t	k;
	size_t	wl;

	i = 0;
	k = 0;
	wl = 0;
	while (s[i] != '\0')
	{
		while (s[i] == c)
			i++;
		if (s[i] != c && s[i] != '\0')
		{
			wl = ft_wordlen(s + i, c);
			if ((arr[k] = ft_strnew(wl)) == NULL)
				return (NULL);
			ft_strncpy(arr[k], s + i, wl);
			k++;
		}
		while (s[i] != c && s[i] != '\0')
			i++;
	}
	return (arr);
}

char			**ft_strsplit(char const *s, char c)
{
	size_t	i;
	size_t	wc;
	char	**arr;

	i = 0;
	if (s == NULL)
		return (NULL);
	wc = ft_wordcnt(s, c);
	if ((arr = (char **)malloc((wc + 1) * sizeof(char *))) == NULL)
		return (NULL);
	if (!wc)
		arr[0] = NULL;
	else
		arr[wc] = NULL;
	ft_splitter(arr, s, c);
	return (arr);
}
