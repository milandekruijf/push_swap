/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   digittoc.c                                         :+:    :+:            */
/*                                                     +:+                    */
/*   By: mde-krui <mde-krui@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2023/11/14 14:54:31 by mde-krui      #+#    #+#                 */
/*   Updated: 2023/11/21 17:39:17 by muijf         ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "../include/libft.h"

char	ft_digittoc(int digit)
{
	if (digit >= 0 && digit <= 9)
		return (digit + '0');
	else
		return (digit - 10 + 'a');
}
