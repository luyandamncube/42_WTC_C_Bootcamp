/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_push_front.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lmncube <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/01/23 13:44:55 by lmncube           #+#    #+#             */
/*   Updated: 2018/01/23 14:08:22 by lmncube          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "ft_list.h"

t_list *ft_create_elem(void *data);

void ft_list_push_front(t_list **begin_list, void *data)
{
	t_list *tmp;
	tmp->next = t_list(tmp);
}
