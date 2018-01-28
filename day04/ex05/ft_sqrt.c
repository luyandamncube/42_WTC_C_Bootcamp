/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sqrt.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lmncube <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/01/14 16:02:30 by lmncube           #+#    #+#             */
/*   Updated: 2018/01/14 17:29:11 by lmncube          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_sqrt(int nb)
{
	int k;
	int index;
	int total;

	total = 0;
	index = 0;
	k = 1;
	while (total < nb)
	{
		total = total + k;
		k += 2;
		index++;
	}
	if (total != nb)
	{
		return (0);
	}
	else
		return (index);
}
