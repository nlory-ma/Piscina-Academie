/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_push_back.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nmuresan <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/09/17 12:55:54 by nmuresan          #+#    #+#             */
/*   Updated: 2015/09/17 13:27:15 by nmuresan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_list.h"

void	ft_lists_push_back(t_list **begin_list, void *data)
{
	t_list *p;

	p = *begin_list;
	if (p)
	{
		while (p->next)
			p = p->next;
		p->next = ft_create_elem(data);
	}
	else
		*begin_list = ft_create_elem(data);
}
