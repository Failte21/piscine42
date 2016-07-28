/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_push_params.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lsimon <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/07/19 14:57:40 by lsimon            #+#    #+#             */
/*   Updated: 2016/07/20 10:50:41 by lsimon           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_list.h"
#include <stdio.h>

t_list	*ft_list_push_params(int ac, char **av)
{
	int		i;
	t_list	*list;
	t_list	*tmp;

	list = ft_create_elem(av[0]);
	i = 1;
	while (i < ac)
	{
		tmp = list;
		list = ft_create_elem(av[i]);
		list->next = tmp;
		i++;
	}
	return (list);
}

int main(int argc, char **argv)
{
	t_list *e1;

	e1 = ft_list_push_params(argc, argv);
	while(e1)
	{
		printf("%s\n", e1->data);
		e1 = e1->next;
	}
}
