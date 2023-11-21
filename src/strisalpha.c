/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   strisalpha.c                                       :+:    :+:            */
/*                                                     +:+                    */
/*   By: mde-krui <mde-krui@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2023/11/06 12:14:58 by mde-krui      #+#    #+#                 */
/*   Updated: 2023/11/21 18:09:11 by muijf         ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "../include/libft.h"

bool	ft_strisalpha(const char *s)
{
	while (*s)
	{
		if (!ft_isalpha(*s++))
			return (false);
	}
	return (true);
}
