/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   create_matrix.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nmuresan <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/09/22 19:42:05 by nmuresan          #+#    #+#             */
/*   Updated: 2015/09/24 23:39:10 by nmuresan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "prototypes.h"

int		g_line;
int		g_column;
int		g_max;

char	*read_str_from_file(char *argv)
{
	int		fd;
	char	*s;
	int		i;
	char	c;

	i = 0;
	fd = open(argv, O_RDONLY);
	if (fd == -1)
	{
		s = (char*)malloc(sizeof(char) * 1);
		return (s);
	}
	while (read(fd, &c, 1))
		i++;
	s = (char*)malloc(sizeof(char) * i);
	i = 0;
	close(fd);
	fd = open(argv, O_RDONLY);
	while (read(fd, &s[i], 1))
		i++;
	s[i] = '\0';
	close(fd);
	return (s);
}

int		check_strinfo(char *s, int i, int n, char *c)
{
	while (i < n)
	{
		if (s[i] != c[0] && s[i] != c[1])
			return (0);
		i++;
	}
	return (1);
}

int		check_strnewlines(char *s, int pos, int lines, char *c)
{
	int i;
	int j;
	int n;

	j = ++pos;
	i = 1;
	while (s[j] && s[j] != '\n')
		j++;
	n = j - pos;
	while (i <= lines && s[pos])
	{
		if (check_strinfo(s, pos, j, c) == 0)
			return (0);
		if (s[j] == '\n')
			i++;
		pos = ++j;
		j = j + n;
	}
	if (i != lines + 1 || s[pos - 1] != '\n' || s[pos])
		return (0);
	return (1);
}

void	string_validation(char *s, int i, int pos)
{
	char	*c;
	int		line_nb;
	int		**tab;
	int		**rez;

	i = 0;
	while (s[i] != '\n' && s[i])
		i++;
	line_nb = line_number(s, i - 3);
	c = info_characters(s, digits_number(line_nb));
	pos = digits_number(line_nb) + 3;
	if (s[i + 1] != '\n' && s[digits_number(line_nb) + 3] == '\n')
		i = check_strnewlines(s, pos, line_nb, c);
	else
		i = 0;
	if (i == 0)
		write(1, "map error\n", 10);
	else
	{
		tab = create_matrix(s, line_nb, column_number(s), c);
		rez = new_matrix(tab, line_nb, column_number(s));
		max_element(rez, line_nb, column_number(s));
		print_matrix(tab, line_nb, column_number(s), c);
	}
}

int		main(int argc, char **argv)
{
	char	*s;
	int		i;

	s = NULL;
	i = 1;
	if (argc > 1)
		while (i < argc)
		{
			s = read_str_from_file(argv[i]);
			string_validation(s, 0, 0);
			free(s);
			i++;
		}
	else
	{
		s = input();
		string_validation(s, 0, 0);
		free(s);
	}
	return (0);
}
