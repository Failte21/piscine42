/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   do-op.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lsimon <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/07/18 14:37:32 by lsimon            #+#    #+#             */
/*   Updated: 2016/07/18 21:40:06 by lsimon           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "do_op.h"
#include <unistd.h>

int		check_arg(char *str)
{
	if (str[1] != '\0')
		return (0);
	if (str[0] != '+' && str[0] != '-' && str[0] != '/'
		&& str[0] != '%' && str[0] != 42)
		return (0);
	return (1);
}

int		math(int n1, int n2, int (*f)(int, int))
{
	return (f(n1, n2));
}

void	init_math(int (*operation[5])(int, int))
{
	operation[0] = sum;
	operation[1] = sub;
	operation[2] = multiply;
	operation[3] = divide;
	operation[4] = mod;
}

int		main(int argc, char **argv)
{
	int nb1;
	int nb2;
	int	(*operation[5])(int, int);

	if (argc != 4)
		return (1);
	if (!check_arg(argv[2]))
	{
		write(1, "0\n", 2);
		return (1);
	}
	init_math(operation);
	nb1 = ft_atoi(argv[1]);
	nb2 = ft_atoi(argv[3]);
	if (argv[2][0] == '+')
		math(nb1, nb2, operation[0]);
	if (argv[2][0] == '-')
		math(nb1, nb2, operation[1]);
	if (argv[2][0] == '*')
		math(nb1, nb2, operation[2]);
	if (argv[2][0] == '/')
		math(nb1, nb2, operation[3]);
	if (argv[2][0] == '%')
		math(nb1, nb2, operation[4]);
	return (0);
}
