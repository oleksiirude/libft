/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcat.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: olrudenk <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/10/30 18:25:40 by olrudenk          #+#    #+#             */
/*   Updated: 2018/11/18 13:48:46 by olrudenk         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strcat(char *s1, const char *s2)
{
	size_t i;
	size_t k;

	i = -1;
	k = -1;
	while (s1[++i])
		;
	while (s2[++k])
		s1[i++] = s2[k];
	s1[i] = 0;
	return (s1);
}
