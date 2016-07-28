/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   btree_level_count.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lsimon <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/07/22 09:05:37 by lsimon            #+#    #+#             */
/*   Updated: 2016/07/22 10:47:59 by lsimon           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		btree_level_count(btree *root)
{
	if (root->left)
		btree_level_count(root->left);
	if (root->right)
		btree_level_count(right);
	return ()
}
