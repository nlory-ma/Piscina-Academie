/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_advanced_sort_wordtab.c                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nmuresan <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/09/16 20:41:23 by nmuresan          #+#    #+#             */
/*   Updated: 2015/09/16 21:57:22 by nmuresan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_advanced_sort_wordtab(char **tab, int (*cmp)(char *, char *))
{
	int		i;
	int		ok;
	char	*zama;

	ok = 0;
	while (!ok)
	{
		i = 0;
		ok = 1;
		while (tab[i + 1])
		{
			if (cmp(tab[i], tab[i + 1]) > 0)
			{
				zama = tab[i];
				tab[i] = tab[i + 1];
				tab[i + 1] = zama;
				ok = 0;
			}
			i++;
		}
	}
}
