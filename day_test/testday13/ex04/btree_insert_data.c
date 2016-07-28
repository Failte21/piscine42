/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   btree_insert_data.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lsimon <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/07/21 16:29:49 by lsimon            #+#    #+#             */
/*   Updated: 2016/07/21 19:29:46 by lsimon           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_btree.h"
#include <stdlib.h>
#include <stdio.h>

void	ft_putstr(char *str);

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

t_btree	*btree_create_node(void *item)
{
	t_btree	*new;

	new = malloc(sizeof(t_btree));
	if (new)
	{
		new->left = 0;
		new->right = 0;
		new->item = item;
	}
	return (new);
}

void	btree_insert_data(t_btree **root, void *item,
		int (*cmpf)(char*, char*))
{
	if (!*root)
	{
		*root = btree_create_node(item);
		return ;
	}
	if (cmpf(item, (*root)->item) < 0)
		btree_insert_data(&(*root)->left, item, cmpf);
	else
		btree_insert_data(&(*root)->right, item, cmpf);
}

void	btree_apply_infix(t_btree *root, void (*applyf)(char*))
{
	if (root->left)
		btree_apply_infix(root->left, applyf);
	applyf(root->item);
	if (root->right)
		btree_apply_infix(root->right, applyf);
}

int main()
{
	t_btree *root;
	t_btree *;

	btree_insert_data(&root, "100", &ft_strcmp);
	tmp = root;
	btree_insert_data(&root, "90", &ft_strcmp);
	btree_insert_data(&root, "80", &ft_strcmp);
	btree_insert_data(&root, "85", &ft_strcmp);
	btree_insert_data(&root, "5", &ft_strcmp);
	btree_insert_data(&root, "135", &ft_strcmp);

	btree_apply_infix(tmp, &ft_putstr);
}
