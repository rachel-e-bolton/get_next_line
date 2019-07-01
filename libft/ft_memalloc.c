/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memalloc.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rbolton <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/06/03 10:41:13 by rbolton           #+#    #+#             */
/*   Updated: 2019/06/03 10:59:01 by rbolton          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memalloc(size_t size)
{
	char	*mem_ptr;

	mem_ptr = (char *)malloc(size * sizeof(*mem_ptr));
	if (mem_ptr == NULL)
		return (NULL);
	ft_memset(mem_ptr, 0, size);
	return (mem_ptr);
}
