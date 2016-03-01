/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   other_functions.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nmuresan <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/09/23 02:10:16 by nmuresan          #+#    #+#             */
/*   Updated: 2015/09/23 21:18:41 by nmuresan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "prototypes.h"

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

char	*info_characters(char *s, int pos)
{
	char	*info;

	info = (char*)malloc(sizeof(char) * 3);
	info[0] = s[pos];
	info[1] = s[pos + 1];
	info[2] = s[pos + 2];
	return (info);
}

long	line_number(char *s, int n)
{
	int		i;
	long	nb;

	nb = 0;
	i = 0;
	while (s[i] >= '0' && s[i] <= '9' && i < n)
		nb = nb * 10 + (s[i++] - '0');
	return (nb);
}

int		digits_number(long n)
{
	int nb;

	nb = 0;
	while (n)
	{
		n /= 10;
		nb++;
	}
	return (nb);
}

int		column_number(char *s)
{
	int i;
	int nb;

	i = 0;
	nb = 0;
	while (s[i] != '\n')
		i++;
	i++;
	while (s[i] && s[i] != '\n')
	{
		i++;
		nb++;
	}
	return (nb);
}
