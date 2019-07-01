/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnew.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rbolton <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/06/03 11:19:32 by rbolton           #+#    #+#             */
/*   Updated: 2019/06/03 11:22:41 by rbolton          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnew(size_t size)
{
	char	*mem_ptr;

	mem_ptr = (char *)malloc((size * sizeof(*mem_ptr)) + 1);
	if (mem_ptr == NULL)
		return (NULL);
	ft_memset(mem_ptr, '\0', size + 1);
	return (mem_ptr);
}
