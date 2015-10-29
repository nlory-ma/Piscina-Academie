/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_count_if.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nmuresan <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/09/15 15:43:57 by nmuresan          #+#    #+#             */
/*   Updated: 2015/09/16 20:39:03 by nmuresan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_count_if(char **tab, int (*f)(char*))
{
	int i;
	int nr;

	nr = 0;
	i = 0;
	while (tab[i])
	{
		if (f(tab[i]) == 1)
			nr++;
		i++;
	}
	return (nr);
}
