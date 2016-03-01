/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   standard_input.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nmuresan <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/09/23 17:13:16 by nmuresan          #+#    #+#             */
/*   Updated: 2015/09/24 13:53:45 by nmuresan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "prototypes.h"

char	*stdin_string(char *str)
{
	char	c;
	int		i;

	i = 0;
	c = 0;
	while (read(0, &c, 1))
	{
		str[i] = c;
		i++;
	}
	str[i] = '\0';
	return (str);
}

char	*input(void)
{
	char *str;

	str = (char*)malloc(sizeof(char) * 10000000000);
	str = stdin_string(str);
	return (str);
}
