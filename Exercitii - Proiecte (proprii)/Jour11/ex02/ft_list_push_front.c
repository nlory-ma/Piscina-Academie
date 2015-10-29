/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_push_front.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nmuresan <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/09/17 13:30:26 by nmuresan          #+#    #+#             */
/*   Updated: 2015/09/17 14:07:46 by nmuresan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_list.h"

void	ft_list_push_front(t_list **begin_list, void *data)
{
	t_list *p;

	p = *begin_list;
	if (p)
	{
		p = ft_create_elem(data);
		p->next = *begin_list;
		*begin_list = p;
	}
	else
		*begin_list = ft_create_elem(data);
}
