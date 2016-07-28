/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_door.h                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lsimon <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/07/15 16:14:50 by lsimon            #+#    #+#             */
/*   Updated: 2016/07/15 16:47:35 by lsimon           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_DOOR_H
# define FT_DOOR_H
# define OPEN
# define CLOSE

char	*ft_putstr(char *str);
void	 close_door(t_door *door);
void	 open_door(t_door *door);
ft_bool	is_door_open(t_door door);
ft_bool	is_door_close(void);

typedef enum ft_bool
{
	TRUE 1,
	FALSE 0
}ft_bool;

typedef struct t_door
{
	int state
}t_door;

#endif
