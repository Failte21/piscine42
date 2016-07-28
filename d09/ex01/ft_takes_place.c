/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_takes_place.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lsimon <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/07/14 18:47:42 by lsimon            #+#    #+#             */
/*   Updated: 2016/07/14 19:40:09 by lsimon           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

void	ft_takes_places(int hours)
{
	int		format_hour;
	char	*day_time;

	if (hours > 12 && hours < 23)
	{
		printf("THE FOLLOWING TAKES PLACE BETWEEN %d.00 PM AND %d.00 PM",
		hours - 12, hours - 12 + 1);
	}
	else if (hours == 23)
		printf("THE FOLLOWING TAKES PLACE BETWEEN 11.00 P.M. AND 12.00 A.M.");
	else if (hours == 24)
		printf("THE FOLLOWING TAKES PLACE BETWEEN 12.00 A.M. AND 1.00 A.M.");
	if (hours > 0 && hours < 11)
	{
		printf("THE FOLLOWING TAKES PLACE BETWEEN %d.00 AM AND %d.00 A.M.",
		hours, hours + 1);
	}
	else if (hours == 11)
		printf("THE FOLLOWING TAKES PLACE BETWEEN 11.00 A.M. AND 12.00 P.M.");
	else if (hours == 12)
		printf("THE FOLLOWING TAKES PLACE BETWEEN 12.00 P.M. AND 1.00 P.M.");
	printf("%c", '\n');
}
