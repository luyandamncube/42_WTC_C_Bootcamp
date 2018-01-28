/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lmncube <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/01/11 08:40:26 by lmncube           #+#    #+#             */
/*   Updated: 2018/01/11 14:31:38 by lmncube          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c);

void	ft_print_comb(void)
{
	int num[3];

	while (num[0] <= 7)
	{
		num[1] = num[0] + 1;
		while (num[1] <= 8)
		{
			num[2] = num[1] + 1;
			while (num[2] <= 9)
			{
				ft_putchar(num[0] + 48);
				ft_putchar(num[1] + 48);
				ft_putchar(num[2] + 48);
				if (num[0] + num[1] + num[2] != 24)
					ft_putchar(',');
				ft_putchar(' ');
				num[2]++;
			}
			num[1]++;
		}
		num[0]++;
	}
}
