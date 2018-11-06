/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: olrudenk <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/10/31 11:53:22 by olrudenk          #+#    #+#             */
/*   Updated: 2018/11/02 16:31:29 by olrudenk         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	size_t i;
	size_t k;

	i = -1;
	k = 0;
	while (s[++i])
		if (s[i] == (char)c)
			k = i;
	if (k > 1)
		return ((&((char*)s)[k]));
	if (s[i] == (char)c)
		return (&((char*)s)[i]);
	return (NULL);
}
