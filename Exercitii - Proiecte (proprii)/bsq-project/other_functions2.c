/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   other_functions2.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nmuresan <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/09/23 12:47:08 by nmuresan          #+#    #+#             */
/*   Updated: 2015/09/23 15:23:50 by nmuresan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "prototypes.h"

int		str_start_position(char *s)
{
	int nr;

	nr = 0;
	while (s[nr] && s[nr] != '\n')
		nr++;
	nr++;
	return (nr);
}

int		min(int a, int b, int c)
{
	if (a <= b && b <= c)
		return (a);
	if (b <= a && a <= c)
		return (b);
	return (c);
}

void	ft_putnbr(int n)
{
	if (n > 9)
		ft_putnbr(n / 10);
	ft_putchar(n % 10 + '0');
}
