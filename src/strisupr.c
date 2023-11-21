/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   strisupr.c                                         :+:    :+:            */
/*                                                     +:+                    */
/*   By: mde-krui <mde-krui@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2023/11/06 12:14:58 by mde-krui      #+#    #+#                 */
/*   Updated: 2023/11/21 18:05:43 by muijf         ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "../include/libft.h"

bool	ft_strisupr(const char *s)
{
	while (*s)
	{
		if (!ft_isupper(*s++))
			return (false);
	}
	return (true);
}
