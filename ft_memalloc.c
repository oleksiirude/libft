/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memalloc.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: olrudenk <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/06 11:08:08 by olrudenk          #+#    #+#             */
/*   Updated: 2018/11/06 11:54:16 by olrudenk         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memalloc(size_t size)
{
	size_t	*arr;

	arr = (size_t*)malloc(sizeof(size_t) * size);
	if (!arr)
		return (NULL);
	ft_memset(arr, 0, size);
	return ((void*)arr);
}
