/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   list.h                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lsimon <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/07/25 20:00:25 by lsimon            #+#    #+#             */
/*   Updated: 2016/07/27 18:57:49 by tfarrugi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIST_H
# define LIST_H

# include "bsq.h"

typedef struct		s_tab
{
	int		height;
	int		width;
	char	empty;
	char	full;
	char	obstacle;
}					t_tab;

typedef struct		s_point
{
	int		value;
	int		pos;
}					t_point;

#endif
