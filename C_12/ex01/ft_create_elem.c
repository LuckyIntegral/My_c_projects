/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_create_elem.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vfrants <frantsv2004@gmail.com>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/13 09:04:24 by vfrants           #+#    #+#             */
/*   Updated: 2023/08/13 11:14:59 by vfrants          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_list.h"

t_list	*ft_create_elem(void *data)
{
	t_list	*component;

	component = (t_list *)malloc(sizeof(t_list));
	if (!component)
		return (component);
	component->data = data;
	component->next = NULL;
	return (component);
}
