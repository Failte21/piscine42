/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_clear.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lsimon <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/07/19 17:00:14 by lsimon            #+#    #+#             */
/*   Updated: 2016/07/20 08:09:25 by lsimon           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_list.h"
#include <stdio.h>
#include <stdlib.h>

void ft_list_clear(t_list **begin_list)
{
	t_list *tmp;

	while(*begin_list)
	{
		tmp = *begin_list;
		*begin_list = (*begin_list)->next;
		free(tmp);
	}
	free(begin_list);
}

int	main()
{
	t_list *element;
	t_list *tmp;

	element = ft_create_elem("hello");
	ft_list_push_back(&element, "yolo");
	ft_list_push_back(&element->next, "yala");
	tmp = element;
	while(element)
	{
		printf("%s\n", element->data);
		element = element->next;
	}
	ft_list_clear(&tmp);
	if(tmp)
		printf("KO");
	else
		printf("OK");
	return (0);
}

