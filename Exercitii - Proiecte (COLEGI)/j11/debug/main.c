/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: skerekes <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/09/16 23:41:33 by skerekes          #+#    #+#             */
/*   Updated: 2015/09/17 14:01:17 by skerekes         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <unistd.h>
#include "ft_list.h"

void	ft_list_reverse(t_list **begin_list);

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_putstr(char *str)
{
	int i;

	i = 0;
	while(str[i] != '\0')
	{
		ft_putchar(str[i]);
		i++;
	}
}

void	print_list(t_list *list)
{
	while (list)
	{
		ft_putstr(list->data);
		ft_putchar('\n');
		list = list->next;
	}
}

t_list		*add_link(t_list *list, char *str)
{
	t_list	*mylist;

	mylist = NULL;
	mylist = malloc(sizeof(t_list));
	if (mylist != NULL)
	{
		mylist->data = str;
		mylist->next = list;
	}
	return (mylist);
}

int		main()
{
	t_list	*list;

	list = NULL;

	ft_putstr("normal list:\n");
	print_list(list);
	ft_putchar('\n');
	ft_putstr("reversed list:\n");
	ft_list_reverse(&list);
	print_list(list);
}
