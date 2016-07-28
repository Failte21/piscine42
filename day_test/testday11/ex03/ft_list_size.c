/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_size.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lsimon <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/07/19 13:54:49 by lsimon            #+#    #+#             */
/*   Updated: 2016/07/19 14:03:54 by lsimon           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_list.h"
#include <stdio.h>

int	ft_list_size(t_list *begin_list)
{
	int count;
	t_list *tmp;

	count = 1;
	if (!begin_list)
		return 0;
	tmp = begin_list;
	while(tmp->next)
	{
		count++;
		tmp = tmp->next;
	}
	return (count);
}

int main()
{
	t_list *first_element;

	first_element = ft_create_elem("yollo");
	printf("%d\n", ft_list_size(first_element));
}
