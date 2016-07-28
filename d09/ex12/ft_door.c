/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_door.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lsimon <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/07/15 15:41:26 by lsimon            #+#    #+#             */
/*   Updated: 2016/07/15 16:39:04 by lsimon           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_door.h"

char	*ft_putstr(char *str)
{
	int i;

	i = 0;
	while (str[i])
	{
		write(1, str[i], 1);
		i++;
	}
}

void	close_door(*door)
{
	ft_putstr("Door closing");
	door->state = CLOSE;
	return (TRUE);
}

void	open_door(*door)
{
	ft_putstr("Door opening");
	door->state = OPEN;
	return (TRUE);
}

ft_bool	is_door_open(*door)
{
	ft_putstr("Door is open ?");
	if (door->state == OPEN)
		return(TRUE);
	else
		return(FALSE);
}

ft_bool	is_door_close(*door)
{
	ft_putstr("Door is close ?");
	if(t_door->state == OPEN)
		return (FALSE);
	else
		return (TRUE);
}
