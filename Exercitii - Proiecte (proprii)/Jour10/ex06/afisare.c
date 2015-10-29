/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   afisare.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nmuresan <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/09/16 14:09:41 by nmuresan          #+#    #+#             */
/*   Updated: 2015/09/16 17:22:09 by nmuresan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(int c)
{
	write(1, &c, 1);
}

void	ft_putstr(char *s)
{
	int i;

	i = 0;
	while (s[i])
		i++;
	i--;
	while (i >= 0)
	{
		ft_putchar(s[i]);
		i--;
	}
	ft_putchar('\n');
}

void	afisare(long n)
{
	int		i;
	char	s[100];

	if (n < 0)
	{
		ft_putchar('-');
		n = n * -1;
	}
	i = 0;
	if (n == 0)
		ft_putchar('0');
	while (n)
	{
		s[i] = n % 10 + '0';
		i++;
		n = n / 10;
	}
	s[i] = '\0';
	ft_putstr(s);
}
