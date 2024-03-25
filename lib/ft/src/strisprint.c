/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   strisprint.c                                       :+:    :+:            */
/*                                                     +:+                    */
/*   By: mde-krui <mde-krui@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2023/11/06 12:14:58 by mde-krui      #+#    #+#                 */
/*   Updated: 2024/03/01 11:11:12 by muijf         ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

bool	ft_strisprint(const char *s)
{
	while (*s)
	{
		if (!ft_isprint(*s++))
			return (false);
	}
	return (true);
}
