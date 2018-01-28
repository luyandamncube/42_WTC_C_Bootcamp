/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_sort.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lmncube <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/01/22 15:06:21 by lmncube           #+#    #+#             */
/*   Updated: 2018/01/22 18:09:12 by lmncube          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_is_sort(int *tab, int length, int (*f)(int, int))
{
	int		k;
	int		m;
	int		store;

	m = 0;
	while (m < length)
	{
		tab[m] = f(m, m + 1);
	}
	store = tab[0];
	k = 1;
	while (k < length)
	{
		if (tab[k] != store)
			return (0);
		k++;
	}
	return (1);
}
