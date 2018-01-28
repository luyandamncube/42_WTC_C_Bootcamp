/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lmncube <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/01/14 12:39:27 by lmncube           #+#    #+#             */
/*   Updated: 2018/01/14 14:00:05 by lmncube          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_iterative_power(int nb, int power)
{
	int k;
	int total;

	k = 0;
	total = 1;
	if (power <= 0)
		return (1);
	else if (power == 1)
		return (nb);
	else
		while (k < power)
		{
			total *= nb;
			k++;
		}
	return (total);
}
