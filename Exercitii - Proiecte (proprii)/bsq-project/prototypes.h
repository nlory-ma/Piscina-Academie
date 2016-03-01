/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   prototypes.h                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nmuresan <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/09/22 19:29:02 by nmuresan          #+#    #+#             */
/*   Updated: 2015/09/23 21:16:03 by nmuresan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PROTOTYPES_H
# define PROTOTYPES_H

# include <unistd.h>
# include <stdlib.h>
# include <fcntl.h>

char	*read_str_from_file(char *argv);
int		check_strnewlines(char *s, int pos, int lines, char *c);
int		check_strinfo(char *s, int i, int n, char *c);
void	string_validation(char *s, int i, int pos);
void	ft_putchar(char c);
char	*info_characters(char *s, int pos);
long	line_number(char *s, int n);
int		digits_number(long n);
int		column_number(char *s);
void	print_matrix(int **tab, int lines, int columns, char *c);
int		**create_matrix(char *s, int lines, int columns, char *c);
int		str_start_position(char *s);
int		min(int a, int b, int c);
int		**new_matrix(int **t, int lines, int columns);
void	ft_putnbr(int n);
void	max_element(int **rez, int lines, int columns);
char	*stdin_string(char *str);
char	*input(void);

extern	int g_line;
extern	int g_column;
extern	int g_max;

#endif
