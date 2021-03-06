/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   btree_search_item.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lsimon <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/07/22 08:23:29 by lsimon            #+#    #+#             */
/*   Updated: 2016/07/22 08:45:01 by lsimon           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "ft_btree.h"
#include <stdio.h>
#include <stdlib.h>

void	*btree_search_item(t_btree *root, void *data_ref,
		int (*cmpf)(char*, char*))
{
	if (root->left)
		btree_search_item(root->left, data_ref, cmpf);
	if (cmpf(data_ref, root->item) == 0)
		return (root->item);
	if (root->right)
		btree_search_item(root->right, data_ref, cmpf);
	return (0);
}

int		ft_strcmp(char *s1, char *s2)
{
	int i;

	i = 0;
	while (s1[i] || s2[i])
	{
		if (s1[i] != s2[i])
			return (s1[i] - s2[i]);
		i++;
	}
	return (0);
}

int main()
{
	t_btree *t1;
	t_btree *t2;
	t_btree *t3;
	t_btree *t4;
	t_btree *t5;

	t1 = malloc(sizeof(t_btree));
	t2 = malloc(sizeof(t_btree));
	t3 = malloc(sizeof(t_btree));
	t4 = malloc(sizeof(t_btree));
	t5 = malloc(sizeof(t_btree));

	t1->item = "1";
	t2->item = "2";
	t3->item = "3";
	t4->item = "4";
	t5->item = "5";

	t1->left = t2;
	t1->right = t3;
	
	t2->left = t4;
	t2->right = t5;

	t3->left = NULL;
	t3->right = NULL;

	t4->left = NULL;
	t4->right = NULL;

	t5->left = NULL;
	t5->right = NULL;

	printf("%s\n", btree_search_item(t1, "15", &ft_strcmp));
}


