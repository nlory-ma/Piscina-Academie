/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   matrix.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nmuresan <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/09/23 05:24:08 by nmuresan          #+#    #+#             */
/*   Updated: 2015/09/24 13:54:24 by nmuresan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "prototypes.h"

int		**create_matrix(char *s, int lines, int columns, char *c)
{
	int		**tab;
	int		i;
	int		j;
	int		nr;

	nr = str_start_position(s);
	tab = (int**)malloc(sizeof(int*) * lines);
	i = 0;
	while (i < lines)
	{
		tab[i] = (int*)malloc(sizeof(tab) * columns);
		j = 0;
		while (j < columns)
		{
			if (s[nr] == c[0])
				tab[i][j] = 1;
			else
				tab[i][j] = 0;
			nr++;
			j++;
		}
		nr++;
		i++;
	}
	return (tab);
}

int		**new_matrix(int **t, int lines, int columns)
{
	int i;
	int j;
	int **rez;

	i = 0;
	rez = (int**)malloc(sizeof(int*) * lines);
	while (i < lines)
	{
		j = 0;
		rez[i] = (int*)malloc(sizeof(int) * columns);
		while (j < columns)
		{
			if (i < 1 || j < 1 || t[i][j] == 0)
				rez[i][j] = t[i][j];
			else
				rez[i][j] = min(rez[i - 1][j], rez[i - 1][j - 1],
						rez[i][j - 1]) + 1;
			j++;
		}
		i++;
	}
	return (rez);
}

void	max_element(int **rez, int lines, int columns)
{
	int i;
	int j;

	g_max = 0;
	i = 0;
	while (i < lines)
	{
		j = 0;
		while (j < columns)
		{
			if (rez[i][j] > g_max)
			{
				g_max = rez[i][j];
				g_line = i;
				g_column = j;
			}
			j++;
		}
		i++;
	}
	g_line = g_line - g_max + 1;
	g_column = g_column - g_max + 1;
}

void	print_matrix(int **tab, int lines, int columns, char *c)
{
	int i;
	int j;

	i = 0;
	j = 0;
	while (i < lines)
	{
		j = 0;
		while (j < columns)
		{
			if (i >= g_line && i < g_line + g_max && j >= g_column &&
					j < g_column + g_max)
				ft_putchar(c[2]);
			else if (tab[i][j] == 0)
				ft_putchar(c[1]);
			else
				ft_putchar(c[0]);
			j++;
		}
		ft_putchar('\n');
		i++;
	}
}
