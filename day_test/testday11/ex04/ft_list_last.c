/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_last.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lsimon <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/07/19 14:20:38 by lsimon            #+#    #+#             */
/*   Updated: 2016/07/19 14:46:13 by lsimon           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_list.h"
#include <stdio.h>
t_list	*ft_create_elem(void *data);
t_list	*ft_list_push_back(t_list **begin_list, void *data);

t_list	*ft_list_last(t_list *begin_list)
{
	t_list *tmp;

	if (!begin_list)
		return 0;
	tmp = begin_list;
	while(tmp->next)
		tmp = tmp->next;
	return (tmp);
}

int	main()
{
	t_list	*e1;
	t_list	*last;

	e1 = ft_create_elem("yolo");
	ft_list_push_back(&e1, "yala");
	last = ft_list_last(e1);
	printf("%s\n", last->data);
}
