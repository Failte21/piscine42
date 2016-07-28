/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft__list_push_back.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lsimon <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/07/19 10:04:00 by lsimon            #+#    #+#             */
/*   Updated: 2016/07/20 10:49:54 by lsimon           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_list.h"
#include <stdio.h>

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

int main()
{
	t_list *first_element;

	first_element = ft_create_elem("hello");
	ft_list_push_back(&first_element, "yolo");
	ft_list_push_back(&first_element->next, "yala");
	ft_list_push_back(&first_element->next->next, "heah");
	while(first_element)
	{
		printf("%s\n", first_element->next->data);
		first_element = first_element->next;
	}
	return (0);
}
