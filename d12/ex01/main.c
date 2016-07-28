/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lsimon <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/07/20 17:06:24 by lsimon            #+#    #+#             */
/*   Updated: 2016/07/21 13:59:59 by lsimon           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <fcntl.h>
#include <sys/uio.h>
#include <sys/types.h>
#include <errno.h>
#include "display_file.h"

void	return_error(char *av)
{
	if (errno == ENOENT)
	{
		ft_putstr("ft_cat: ", &ft_puterror);
		ft_putstr(av, &ft_puterror);
		ft_putstr(": No such file or directory\n", &ft_puterror);
	}
	if (errno == EISDIR)
	{
		ft_putstr("ft_cat: ", &ft_puterror);
		ft_putstr(av, &ft_puterror);
		ft_putstr(": Is a directory\n", &ft_puterror);
	}
	if (errno == EACCES)
	{
		ft_putstr("ft_cat: ", &ft_puterror);
		ft_putstr(av, &ft_puterror);
		ft_putstr(": Permission denied\n", &ft_puterror);
	}
	errno = 0;
}

void	display(char *av)
{
	int		f;
	int		r;
	char	buff[MAX_LEN + 1];

	f = open(av, O_RDONLY);
	if (errno != 0)
	{
		return_error(av);
		return ;
	}
	while ((r = read(f, buff, MAX_LEN)) != 0)
	{
		if (errno != 0)
		{
			return_error(av);
			return ;
		}
		buff[r] = '\0';
		ft_putstr(buff, &ft_putchar);
	}
	close(f);
}

void	ft_stdin(void)
{
	int		r;
	char	buff[MAX_LEN + 1];

	while (1)
	{
		while ((r = read(0, buff, MAX_LEN)))
		{
			buff[r] = '\0';
			ft_putstr(buff, &ft_putchar);
		}
	}
}

int		main(int argc, char **argv)
{
	int i;

	if (argc < 2)
	{
		ft_stdin();
		return (0);
	}
	i = 1;
	while (i < argc)
	{
		display(argv[i]);
		i++;
	}
	return (0);
}
