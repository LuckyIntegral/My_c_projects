/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstclear.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vfrants <frantsv2004@gmail.com>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/20 16:21:06 by vfrants           #+#    #+#             */
/*   Updated: 2023/08/20 16:29:28 by vfrants          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void ft_lstclear(t_list **lst, void (*del)(void *))
{
	t_list	*next;
	t_list	*this;

	this = *lst;
	while (this)
	{
		next = this->next;
		ft_lstdelone(this, del);
		this = next;
	}
	*lst = NULL;
}
