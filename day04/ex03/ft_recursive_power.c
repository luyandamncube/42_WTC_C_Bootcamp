/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_recursive_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lmncube <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/01/14 12:55:05 by lmncube           #+#    #+#             */
/*   Updated: 2018/01/14 13:13:29 by lmncube          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_recursive_power(int nb, int power)
{
	int total;

	total = nb;
	if (power <= 0)
		return (1);
	else if (power == 1)
		return (nb);
	else
	{
		total = ft_recursive_power(nb, power - 1) * nb;
		return (total);
	}
}
