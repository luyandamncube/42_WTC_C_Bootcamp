/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_fibonacci.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lmncube <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/01/14 13:16:51 by lmncube           #+#    #+#             */
/*   Updated: 2018/01/14 17:29:36 by lmncube          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int		ft_fibonacci(int index)
{
	int total;

	total = 0;
	if (index < 0)
		return (-1);
	else if (index == 1 || index == 2)
		return (1);
	else
		total = ft_fibonacci(index - 1) + ft_fibonacci(index - 2);
	return (total);
}
