/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   issnum.c                                         :+:    :+:            */
/*                                                     +:+                    */
/*   By: muijf <muijf@student.codam.nl>               +#+                     */
/*                                                   +#+                      */
/*   Created: 2023/11/21 17:59:35 by muijf         #+#    #+#                 */
/*   Updated: 2023/11/21 17:59:51 by muijf         ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

bool	ft_strisnum(const char *s)
{
	if (*s == '+' || *s == '-')
		s++;
	while (*s)
	{
		if (!ft_isdigit(*s++))
			return (false);
	}
	return (true);
}
