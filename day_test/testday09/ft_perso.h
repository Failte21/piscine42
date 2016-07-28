/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_perso.h                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lsimon <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/07/15 15:18:20 by lsimon            #+#    #+#             */
/*   Updated: 2016/07/15 15:33:36 by lsimon           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PERSO_H

# define FT_PERSO_H
# define SAVE_AUSTIN_POWERS

char	*strdup(char *src);

typedef struct t_perso
{
	char	*name;
	float	*life;
	int		age;
	char	*profession;
};

#endif
