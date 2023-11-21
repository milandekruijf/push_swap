/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   atoi.c                                             :+:    :+:            */
/*                                                     +:+                    */
/*   By: mde-krui <mde-krui@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2023/10/02 16:10:27 by mde-krui      #+#    #+#                 */
/*   Updated: 2023/11/21 16:43:34 by muijf         ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "../include/libft.h"

int	ft_atoi(const char *n)
{
	int	sign;
	int	res;

	while (ft_isspace(*n))
		n++;
	sign = 1;
	if (*n == '-' || *n == '+')
	{
		if (*n == '-')
			sign = -1;
		n++;
	}
	res = 0;
	while (ft_isdigit(*n))
		res = res * 10 + *n++ - '0';
	return (res * sign);
}
