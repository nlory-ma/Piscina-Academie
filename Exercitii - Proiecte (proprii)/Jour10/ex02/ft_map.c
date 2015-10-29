/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_map.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nmuresan <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/09/15 15:09:27 by nmuresan          #+#    #+#             */
/*   Updated: 2015/09/15 15:27:00 by nmuresan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int		*ft_map(int *tab, int lenght, int (*f)(int))
{
	int *v;
	int i;

	i = 0;
	v = (int*)malloc(sizeof(*tab) * lenght);
	while (i < lenght)
	{
		v[i] = f(tab[i]);
		i++;
	}
	return (v);
}
