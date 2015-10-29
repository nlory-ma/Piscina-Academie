/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_push_params.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nmuresan <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/09/17 16:02:35 by nmuresan          #+#    #+#             */
/*   Updated: 2015/09/17 16:48:12 by nmuresan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_list.h"
#include <stdlib.h>

t_list	*adaugare(t_list *lista, void *data)
{
	t_list *p;

	p = NULL;
	p = (t_list*)malloc(sizeof(t_list));
	if (p)
	{
		p->data = data;
		p->next = lista;
	}
	return (p);
}

t_list	*ft_list_push_params(int ac, char **av)
{
	int		i;
	t_list	*p;

	i = 2;
	p = NULL;
	if (ac == 1)
		return (p);
	p = (t_list*)malloc(sizeof(t_list));
	if (p)
	{
		p = ft_create_elem(av[1]);
		while (i < ac)
		{
			p = adaugare(p, av[i]);
			i++;
		}
	}
	return (p);
}
