/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_sort.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nmuresan <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/09/15 16:28:38 by nmuresan          #+#    #+#             */
/*   Updated: 2015/09/15 17:01:02 by nmuresan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_is_sort(int *tab, int lenght, int (*f)(int, int))
{
	int i;

	i = 0;
	if (lenght < 2)
		return (1);
	while (f(tab[i], tab[i + 1]) >= 0 && i < lenght - 1)
		i++;
	if (i == lenght - 1)
		return (1);
	i = 0;
	while (f(tab[i], tab[i + 1]) <= 0 && i < lenght - 1)
		i++;
	if (i == lenght - 1)
		return (1);
	return (0);
}
