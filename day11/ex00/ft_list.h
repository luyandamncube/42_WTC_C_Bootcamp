/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list.h                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lmncube <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/01/23 09:47:28 by lmncube           #+#    #+#             */
/*   Updated: 2018/01/23 14:10:27 by lmncube          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_LIST_H
# define FT_LIST_H

typedef struct 		s_list
{
	struct s_list 	*next;
	void 			*data;
} 					t_list;

t_list *ft_create_elem(void *data);

#endif
