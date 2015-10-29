/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nmuresan <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/09/16 11:40:14 by nmuresan          #+#    #+#             */
/*   Updated: 2015/09/16 17:54:25 by nmuresan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "zama.h"
#include <unistd.h>

int		aflare_operator(char *s)
{
	if (!ft_strcmp(s, "/"))
		return (0);
	else if (!ft_strcmp(s, "+"))
		return (1);
	else if (!ft_strcmp(s, "-"))
		return (2);
	else if (!ft_strcmp(s, "%"))
		return (3);
	else if (!ft_strcmp(s, "*"))
		return (4);
	else
		return (-1);
}

void	caz_particular(int i, long b)
{
	if (i == 3 && b == 0)
		write(1, "Stop : modulo by zero\n", 22);
	else if (i == 0 && b == 0)
		write(1, "Stop : division by zero\n", 22);
	else
		afisare(0);
}

void	rezultat(int ac, char **ar)
{
	long	(*f[5])(long, long);
	long	(*g)(long, long);
	long	a;
	long	b;
	int		i;

	f[0] = &divide;
	f[1] = &suma;
	f[2] = &scadere;
	f[3] = &modulo;
	f[4] = &inmultire;
	i = aflare_operator(ar[2]);
	a = ft_atoi(ar[1]);
	b = ft_atoi(ar[3]);
	i = aflare_operator(ar[2]);
	if (ac == 4 && i != -1)
	{
		g = f[i];
		a = (*g)(a, b);
		afisare(a);
	}
	else
		caz_particular(i, b);
}

int		main(int argc, char **argv)
{
	if (argc == 4)
		rezultat(argc, argv);
	return (0);
}
