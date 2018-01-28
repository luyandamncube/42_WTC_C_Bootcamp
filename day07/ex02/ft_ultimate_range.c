/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_range.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lmncube <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/01/18 17:21:12 by lmncube           #+#    #+#             */
/*   Updated: 2018/01/18 18:33:26 by lmncube          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int		ft_ultimate_range(int **range, int min, int max)
{
	int k;
	int *m;
	int q;
	int diff;

	diff = max - min;
	k = min;
	q = 0;
	if (min >= max)
	{
		*range = NULL;
		return (0);
	}
	m = (int *)malloc(4 * (diff) - 1);
	while (k < max)
	{
		(*range)[q] = k;
		q++;
		k++;
	}
	return (m);
}
