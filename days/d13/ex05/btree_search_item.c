/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   btree_search_item.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lsimon <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/07/22 08:23:29 by lsimon            #+#    #+#             */
/*   Updated: 2016/07/22 08:46:58 by lsimon           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_btree.h"

void	*btree_search_item(t_btree *root, void *data_ref,
		int (*cmpf)(void*, void*))
{
	if (root->left)
		btree_search_item(root->left, data_ref, cmpf);
	if (cmpf(data_ref, root->item) == 0)
		return (root->item);
	if (root->right)
		btree_search_item(root->right, data_ref, cmpf);
	return (0);
}
