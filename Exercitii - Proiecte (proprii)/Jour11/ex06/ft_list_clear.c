/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_clear.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nmuresan <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/09/17 17:10:34 by nmuresan          #+#    #+#             */
/*   Updated: 2015/09/17 18:26:01 by nmuresan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_list.h"
#include <stdlib.h>

void	ft_list_clear(t_list **begin_list)
{
	t_list *p;
	t_list *s;

	p = *begin_list;
	s = p;
	while (p)
	{
		s->next = p->next;
		free(p);
		p = s->next;
	}
}
