/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rbolton <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/06/06 12:01:38 by rbolton           #+#    #+#             */
/*   Updated: 2019/06/06 15:58:23 by rbolton          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#define TRUE 1
#define FALSE 0
#include "libft.h"

static size_t	ft_numlen(long int n)
{
	size_t	count;

	count = 0;
	if (n < 0)
		n = n * -1;
	if (n == 0)
		return (count = 1);
	while (n > 0)
	{
		n = n / 10;
		count++;
	}
	return (count);
}

static char		*assign(long int n, size_t len)
{
	char	*str;

	str = NULL;
	if (n < 0)
	{
		str = ft_strnew(len + 1);
	}
	else
	{
		str = ft_strnew(len);
	}
	return (str);
}

static char		*is_neg_true(char *str, size_t len, long int n)
{
	len = len + 1;
	while (n >= 10 && len-- > 1)
	{
		str[len] = (char)((n % 10) + 48);
		n = n / 10;
	}
	str[len - 1] = (char)n + 48;
	str[len - 2] = '-';
	return (str);
}

static char		*is_neg_false(char *str, size_t len, long int n)
{
	while (n >= 10 && len-- > 1)
	{
		str[len] = (char)((n % 10) + 48);
		n = n / 10;
	}
	str[len - 1] = (char)n + 48;
	return (str);
}

char			*ft_itoa(int n)
{
	char		*str;
	size_t		len;
	size_t		is_neg;
	long int	long_n;

	long_n = (long int)n;
	len = ft_numlen(long_n);
	is_neg = FALSE;
	str = assign(n, len);
	if (str == NULL)
		return (NULL);
	if (n < 0)
	{
		long_n = long_n * -1;
		is_neg = TRUE;
	}
	if (is_neg == TRUE)
		return (is_neg_true(str, len, long_n));
	else
		return (is_neg_false(str, len, long_n));
}
