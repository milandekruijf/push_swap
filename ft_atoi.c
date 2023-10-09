/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_atoi.c                                          :+:    :+:            */
/*                                                     +:+                    */
/*   By: mde-krui <mde-krui@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2023/10/02 16:10:27 by mde-krui      #+#    #+#                 */
/*   Updated: 2023/10/09 15:02:58 by mde-krui      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static bool	ft_isspace(int c)
{
	return (c == '\t' || c == '\n' || c == '\v' || c == '\f' || c == '\r'
		|| c == ' ');
}

int	ft_atoi(const char *nptr)
{
	int	s;
	int	r;

	while (ft_isspace(*nptr))
		nptr++;
	s = 1;
	if (*nptr == '-' || *nptr == '+')
	{
		if (*nptr == '-')
			s = -1;
		nptr++;
	}
	r = 0;
	while (ft_isdigit(*nptr))
		r = r * 10 + *nptr++ - '0';
	return (r * s);
}
