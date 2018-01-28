/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_parameters.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lmncube <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/01/17 10:43:35 by lmncube           #+#    #+#             */
/*   Updated: 2018/01/17 14:54:54 by lmncube          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

char	*ft_putstr(char *str)
{
	int k;

	k = 0;
	while (str[k] != '\0')
	{
		ft_putchar(str[k]);
		k++;
	}
	return (str);
}

int		main(int argc, char **argv)
{
	int m;
	int p;

	m = 1;
	p = argc;
	while (m < p)
	{
		ft_putstr(argv[m]);
		ft_putchar('\n');
		m++;
	}
	return (0);
}
