/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list.h                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lmncube <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/01/23 13:30:42 by lmncube           #+#    #+#             */
/*   Updated: 2018/01/23 13:43:48 by lmncube          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef	FT_LIST_H
# define FT_LIST_H

typedef struct s_list
{
	void	*data;
	t_list	*next;
}

void ft_list_push_back(t_list **begin_list, void *data)
#endif
