/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   digittoc.c                                         :+:    :+:            */
/*                                                     +:+                    */
/*   By: mde-krui <mde-krui@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2023/11/14 14:54:31 by mde-krui      #+#    #+#                 */
/*   Updated: 2024/03/01 11:11:12 by muijf         ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	ft_digittoc(int digit)
{
	if (digit >= 0 && digit <= 9)
		return (digit + '0');
	else
		return (digit - 10 + 'a');
}
