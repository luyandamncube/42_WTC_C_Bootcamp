/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_params.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lmncube <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/01/17 11:59:30 by lmncube           #+#    #+#             */
/*   Updated: 2018/01/17 17:12:56 by lmncube          ###   ########.fr       */
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

int		ft_strcmp(char *s1, char *s2)
{
	int k;

	k = 0;
	while (s1[k] == s2[k] && s1[k] != '\0' && s2[k] != '\0')
		k++;
	return (s1[k] - s2[k]);
}

void	ft_print_param(int argc, char **argv)
{
	int k;

	k = 1;
	while (k < argc)
	{
		ft_putstr(argv[k]);
		ft_putchar('\n');
		k++;
	}
}

int		main(int argc, char **argv)
{
	int		m;
	int		p;
	char	*c;

	m = 1;
	while (m < argc - 1)
	{
		p = m + 1;
		while (p < argc)
		{
			if (ft_strcmp(argv[m], argv[p]) > 0)
			{
				c = argv[m];
				argv[m] = argv[p];
				argv[p] = c;
			}
			p++;
		}
		m++;
	}
	ft_print_param(argc, argv);
	return (0);
}
