/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list.h                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lmncube <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/01/23 11:46:27 by lmncube           #+#    #+#             */
/*   Updated: 2018/01/23 14:19:43 by lmncube          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_LIST_H
# define FT_LIST_H

typedef struct 	s_list
{
    void 	*data;
    t_list	*next;
}				tlist

t_list *ft_create_elem(void *data);
#endif
