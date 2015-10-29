/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nmuresan <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/09/11 11:47:10 by nmuresan          #+#    #+#             */
/*   Updated: 2015/09/11 12:02:58 by nmuresan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int		ft_strlen(char *s)
{
	int n;

	n = 0;
	while (s[n])
		n++;
	return (n);
}

char	*ft_strdup(char *src)
{
	int		n;
	int		i;
	char	*rez;

	n = ft_strlen(src);
	i = 0;
	rez = (char *)malloc(sizeof(*rez) * (n + 1));
	while (src[i])
	{
		rez[i] = src[i];
		i++;
	}
	rez[i] = '\0';
	return (rez);
}
