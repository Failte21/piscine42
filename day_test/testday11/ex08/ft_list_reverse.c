/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_reverse.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lsimon <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/07/19 19:03:49 by lsimon            #+#    #+#             */
/*   Updated: 2016/07/19 21:11:43 by lsimon           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_list.h"
#include <stdio.h>

t_list	*ft_list_reverse(t_list **begin_list)
{
	t_list *next;
	t_list *tmp;

	tmp = *begin_list;
	while ((*begin_list)->next)
	{
		next = (*begin_list)->next->next;
		(*begin_list)->next->next = (*begin_list);
		(*begin_list)->next = next;
	}
	return (tmp);
}

int main()
{
	t_list *e1;
	t_list *init;
	t_list *e2;
	t_list *e3;
	t_list *e4;

	e1 = ft_create_elem("ola");
	ft_list_push_back(&e1, "hello");
	ft_list_push_back(&e1->next, "yolo");
	ft_list_push_back(&e1->next->next, "hippie");
	ft_list_push_back(&e1->next->next->next, "yeah");
	init = e1;
	while(e1)
	{
		printf("%s\n", e1->data);
		e1 = e1->next;
	}
	e1 = ft_list_reverse(&init);
	if (!(init->next))
	while(e1)
	{
		printf("%s\n", e1->data);
		e1 = e1->next;
	}
	return (0);
}
