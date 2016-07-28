/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_at.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lsimon <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/07/19 17:49:47 by lsimon            #+#    #+#             */
/*   Updated: 2016/07/19 18:21:08 by lsimon           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_list.h"
#include <stdio.h>
#include <stdlib.h>

t_list	*ft_list_at(t_list *begin_list, unsigned int nbr)
{
	t_list	*tmp;
	unsigned int		i;

	i = 1;
	tmp = begin_list;
	while (tmp && i < nbr)
	{
		tmp = tmp->next;
		i++;
	}
	if (!tmp && i < nbr)
		return (0);
	return(tmp);
}

int		main()
{
	t_list *element;
	t_list *tmp;
	t_list *test;

	element = ft_create_elem("hello");
	ft_list_push_back(&element, "yolo");
	ft_list_push_back(&element->next, "yala");
	tmp = element;
	test = ft_list_at(element, 4);
	if (test)
		printf("%s\n", test->data);
	else
		printf("OK");
	return (0);
}

