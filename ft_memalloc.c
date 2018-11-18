/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memalloc.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: olrudenk <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/06 11:08:08 by olrudenk          #+#    #+#             */
/*   Updated: 2018/11/18 14:00:26 by olrudenk         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memalloc(size_t size)
{
	void	*arr;

	arr = (void*)malloc(sizeof(size_t) *size);
	if (!arr)
		return (NULL);
	ft_memset(arr, 0, size);
	return (arr);
}
