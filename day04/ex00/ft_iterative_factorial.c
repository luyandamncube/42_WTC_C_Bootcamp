/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lmncube <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/01/14 11:28:32 by lmncube           #+#    #+#             */
/*   Updated: 2018/01/14 12:26:38 by lmncube          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_iterative_factorial(int nb)
{
	int m;
	int total;

	m = 1;
	total = 1;
	if (nb < 1 || nb % 1 != 0)
		return (0);
	while (m <= nb)
	{
		total *= m;
		m++;
	}
	return (total);
}
