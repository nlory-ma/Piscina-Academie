/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_push_params.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: skerekes <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/09/16 23:27:03 by skerekes          #+#    #+#             */
/*   Updated: 2015/09/17 00:03:31 by skerekes         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "ft_list.h"

t_list *add_link(t_list *list, void *data)
{
	t_list *container;

	container = NULL;
	container = malloc(sizeof(t_list));
	if (container != 0)
	{
		container->data = data;
		container->next = list;
	}
	return (container);

}

t_list *ft_list_push_params(int ac, char **av)
{
	t_list	*list;
	int		i;

	i = 2;
	if (ac == 1)
		return (NULL);
	list = ft_create_elem(av[1]);
	while (i < ac)
	{
		list = add_link(list, av[i]);
		i++;
	}
	return (list);
}
