/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_arrsort.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: olrudenk <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/14 17:07:04 by olrudenk          #+#    #+#             */
/*   Updated: 2018/11/15 13:20:18 by olrudenk         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_arrsort(int *arr, size_t arrlen)
{
	size_t	i;
	size_t	count;
	int		*st;

	i = 1;
	count = 0;
	st = arr;
	if (!arrlen || arrlen == 1)
		return ;
	while (count < arrlen)
	{
		while (i < arrlen)
		{
			if (*arr > *(arr + 1))
				ft_swap(arr, (arr + 1));
			i++;
			arr++;
		}
		arr = st;
		i = 1;
		count++;
	}
}
