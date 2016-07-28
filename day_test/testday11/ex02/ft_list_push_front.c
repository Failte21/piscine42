/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_push_front.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lsimon <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/07/20 10:55:58 by lsimon            #+#    #+#             */
/*   Updated: 2016/07/20 10:56:00 by lsimon           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_list.h"
#include <stdio.h>

void	ft_list_push_front(t_list **begin_list, void *data)
{
	t_list *new_elem;
	t_list *tmp;

	new_elem = ft_create_elem(data);
	if (!begin_list)
		return ;
	tmp = *begin_list;
	if (*begin_list)
	{
		new_elem->next = tmp;
		*begin_list = new_elem;
	}
	else
		*begin_list = new_elem;
}

int main()
{
	t_list *first_element;

	first_element = ft_create_elem("yolo");
	ft_list_push_front(&first_element, "hola");
	ft_list_push_front(&first_element, "yeah;
	while(first_element)
	{
		printf("%s\n", first_element->data);
		first_element = first_element->next;
	}
}
