/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lsimon <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/07/20 15:52:13 by lsimon            #+#    #+#             */
/*   Updated: 2016/07/21 06:56:22 by lsimon           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <fcntl.h>
#include <sys/uio.h>
#include <sys/types.h>
#include "display_file.h"

int	main(int argc, char **argv)
{
	int		f;
	int		r;
	char	buff[MAX_LEN + 1];

	if (argc > 2)
	{
		write(2, "Too many arguments.\n", 21);
		return (1);
	}
	if (argc < 2)
	{
		write(2, "File name missing.\n", 19);
		return (1);
	}
	f = open(argv[1], O_RDONLY);
	if (f == 3)
	{
		while ((r = read(f, buff, MAX_LEN)) != 0)
		{
			buff[r] = '\0';
			ft_putstr(buff);
		}
		close(f);
	}
	return (0);
}
