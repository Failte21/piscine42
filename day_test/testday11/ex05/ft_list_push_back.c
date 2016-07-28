/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft__list_push_back.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lsimon <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/07/19 10:04:00 by lsimon            #+#    #+#             */
/*   Updated: 2016/07/19 21:46:40 by lsimon           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_list.h"
#include <stdio.h>

t_list *ft_create_elem(void *data);

void	ft_list_push_back(t_list **begin_list, void *data)
{
	t_list *new_elem;
	t_list	*tmp;

	if (!begin_list)
		return ;
	new_elem = ft_create_elem(data);
	if(*begin_list)
	{
		tmp = *begin_list;
		while (tmp ->next)
			tmp = tmp->next;
		tmp->next = new_elem;
	}
	else
		(*begin_list) = new_elem;
}
