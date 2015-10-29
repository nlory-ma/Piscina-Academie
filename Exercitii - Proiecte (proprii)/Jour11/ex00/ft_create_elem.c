/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_create_elem.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nmuresan <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/09/16 23:16:22 by nmuresan          #+#    #+#             */
/*   Updated: 2015/09/17 12:49:10 by nmuresan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_list.h"
#include <stdlib.h>

t_list	*ft_create_elem(void *data)
{
	t_list *q;

	q = NULL;
	q = (t_list*)malloc(sizeof(t_list));
	if (q)
	{
		q->data = data;
		q->next = NULL;
	}
	return (q);
}
