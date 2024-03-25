/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   atol.c                                             :+:    :+:            */
/*                                                     +:+                    */
/*   By: mde-krui <mde-krui@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2023/10/02 16:10:27 by mde-krui      #+#    #+#                 */
/*   Updated: 2024/03/25 15:32:03 by mde-krui      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

long	ft_atol(const char *n)
{
	long	sign;
	long	res;

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
