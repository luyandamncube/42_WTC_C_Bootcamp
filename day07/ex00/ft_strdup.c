/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lmncube <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/01/18 09:25:09 by lmncube           #+#    #+#             */
/*   Updated: 2018/01/18 11:37:29 by lmncube          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int		ft_strlen(char *str)
{
	int k;

	k = 0;
	while (str[k] != '\0')
		k++;
	return (k);
}

char	*ft_strdup(char *src)
{
	int		l;
	int		k;
	char	*dst;

	l = ft_strlen(src);
	dst = (char *)malloc(sizeof(char) * l);
	k = 0;
	while (src[k] != '\0')
	{
		dst[k] = src[k];
		k++;
	}
	dst[k] = '\0';
	return (dst);
}
