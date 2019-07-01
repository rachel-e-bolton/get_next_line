/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_endl_fd.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rbolton <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/28 12:25:57 by rbolton           #+#    #+#             */
/*   Updated: 2019/05/28 12:26:44 by rbolton          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_putnbr_endl_fd(int n, int fd)
{
	long int	long_n;

	long_n = (long int)n;
	if (fd)
	{
		if (n < 0)
		{
			ft_putchar_fd('-', fd);
			long_n = long_n * -1;
		}
		if (long_n >= 10)
		{
			ft_putnbr_fd(long_n / 10, fd);
			ft_putchar_fd((long_n % 10) + 48, fd);
		}
		else
			ft_putchar_fd(long_n + 48, fd);
	}
	ft_putchar_fd('\n', fd);
}
