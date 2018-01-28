/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_recursive_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lmncube <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/01/14 12:17:01 by lmncube           #+#    #+#             */
/*   Updated: 2018/01/14 12:38:58 by lmncube          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_recursive_factorial(int nb)
{
	int total;

	total = 1;
	if (nb == 1 || nb == 0)
		return (nb);
	else if (nb < 1 || nb % 1 != 0)
		return (0);
	else
	{
		total = ft_recursive_factorial(nb - 1) * nb;
		return (total);
	}
}
