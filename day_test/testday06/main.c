/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lsimon <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/07/13 11:28:19 by lsimon            #+#    #+#             */
/*   Updated: 2016/07/13 11:35:21 by lsimon           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putstr(char *str);
void	ft_swqp(int *a, int *b);
int		ft_strlen(char *str);
int		ft_strcmp(char *s1, char *s2);
void	ft_putnbr(int nb);
int		ft_atoi(char *str);
void	ft_putchar(char c);

int		main(void)
{
	ft_putstr("hello");
	ft_putchar('\n');
	ft_putnbr(ft_strcmp("hello", "hola"));
	return (0);
}
