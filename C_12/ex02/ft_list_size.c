/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_size.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vfrants <frantsv2004@gmail.com>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/13 10:23:38 by vfrants           #+#    #+#             */
/*   Updated: 2023/08/13 10:27:53 by vfrants          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_list.h"

int ft_list_size(t_list *begin_list)
{
	t_list el;
	int	i;

	i = 0;
	el = *begin_list;
	while (el.next)
	{
		el.next = el.next->next;
		i++;
	}
	return (i);
}
