/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstdel.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: olrudenk <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/13 14:55:10 by olrudenk          #+#    #+#             */
/*   Updated: 2018/11/14 15:40:06 by olrudenk         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstdel(t_list **alst, void (*del)(void *, size_t))
{
	t_list	*tmp;

	if (!*alst || !del)
		return ;
	while (*alst)
	{
		tmp = *alst;
		del((*alst)->content, (*alst)->content_size);
		*alst = (*alst)->next;
		free(tmp);
	}
	*alst = NULL;
}
