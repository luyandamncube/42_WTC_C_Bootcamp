/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_params.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lmncube <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/01/17 10:54:39 by lmncube           #+#    #+#             */
/*   Updated: 2018/01/17 14:58:17 by lmncube          ###   ########.fr       */
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
	p = argc - 1;
	while (p >= m)
	{
		ft_putstr(argv[p]);
		ft_putchar('\n');
		p--;
	}
	return (0);
}
