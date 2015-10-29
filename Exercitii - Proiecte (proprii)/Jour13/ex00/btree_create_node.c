/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   btree_create_node.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nmuresan <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/09/19 14:23:15 by nmuresan          #+#    #+#             */
/*   Updated: 2015/09/19 14:35:57 by nmuresan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_btree.h"

t_btree		*btree_create_node(void *item)
{
	t_btree	*p;

	p = NULL;
	p = (t_btree*)malloc(sizeof(*p));
	if (p)
	{
		p->item = item;
		p->left = 0;
		p->right = 0;
	}
	return (p);
}
