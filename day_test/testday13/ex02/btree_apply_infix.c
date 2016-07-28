/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   btree_apply_infix.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lsimon <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/07/21 15:51:47 by lsimon            #+#    #+#             */
/*   Updated: 2016/07/21 16:11:18 by lsimon           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_btree.h"
#include <stdlib.h>
#include <stdio.h>

void	ft_putstr(char *str);

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

	btree_apply_infix(t1, &ft_putstr);
}


