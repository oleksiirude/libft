/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstprint.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: olrudenk <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/15 11:55:19 by olrudenk          #+#    #+#             */
/*   Updated: 2018/11/15 12:03:48 by olrudenk         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstprint(t_list *elem)
{
	if (!elem)
		return ;
	while (elem)
	{
		ft_putstr(elem->content);
		write(1, "\n", 1);
		elem = elem->next;
	}
}
