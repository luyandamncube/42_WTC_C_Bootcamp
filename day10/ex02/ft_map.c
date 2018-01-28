/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_map.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lmncube <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/01/22 11:59:40 by lmncube           #+#    #+#             */
/*   Updated: 2018/01/23 09:52:40 by lmncube          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int		*ft_map(int *tab, int length, int (*f)(int))
{
	int *arr;
	int k;

	arr = (int *)malloc(sizeof(int) * length);
	k = 0;
	while (k < length)
	{
		arr[k] = f(tab[k]);
		k++;
	}
	return (arr);
}
