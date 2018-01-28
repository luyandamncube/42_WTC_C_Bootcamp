/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_push_back.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lmncube <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/01/23 12:45:45 by lmncube           #+#    #+#             */
/*   Updated: 2018/01/23 14:25:54 by lmncube          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "ft_list.h"

void ft_list_push_back(t_list **begin_list, void *data)
{
	t_list *tmp;
	//Use "tmp" to iterate over list
	while (tmp->next != NULL)
		tmp = tmp->next;
	//ft_create_elem function already allocates mem, inputs data and point to NULL pointer
	tmp->next = ft_create_elem(data);
}
