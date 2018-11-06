/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: olrudenk <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/10/31 13:16:34 by olrudenk          #+#    #+#             */
/*   Updated: 2018/11/05 13:02:54 by olrudenk         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *haystack, const char *needle, size_t len)
{
	size_t i;
	size_t k;
	size_t buf;
	size_t count;

	if (!*needle || !(ft_strcmp(haystack, needle)))
		return ((char*)haystack);
	if (ft_strlen(haystack) < ft_strlen(needle))
		return (NULL);
	i = 0;
	count = 0;
	while (haystack[i] && len)
	{
		k = 0;
		buf = i;
		while (haystack[i++] == needle[k++] && len--)
			if (!needle[k])
				return (&((char*)haystack)[buf]);
		i = count++;
		len--;
	}
	return (NULL);
}
