/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lmncube <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/01/18 11:39:30 by lmncube           #+#    #+#             */
/*   Updated: 2018/01/18 17:29:27 by lmncube          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int		*ft_range(int min, int max)
{
	int k;
	int q;
	int m;
	int diff;

	diff = max - min;
	k = min;
	q = 0;
	if (min >= max)
	{
		m = NULL;
		return (m);
	}
	m = (int *)malloc(4 * (diff - 1));
	while (k < max)
	{
		m[q] = k;
		q++;
		k++;
	}
	return (m);
}
