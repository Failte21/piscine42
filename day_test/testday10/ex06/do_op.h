/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   do-op.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lsimon <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/07/18 17:10:04 by lsimon            #+#    #+#             */
/*   Updated: 2016/07/18 17:20:49 by lsimon           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef DO_OP_H
# define DO_OP_H

void	ft_putchar(char c);
void	ft_putnbr(int nb);
int		ft_atoi(char *str);
int		sum(int n1, int n2);
int		sub(int n1, int n2);
int		multiply(int n1, int n2);
int		divide(int n1, int n2);
int		mod(int n1, int n2);
int		math(int n1, int n2, int(*f)(int, int));

#endif
