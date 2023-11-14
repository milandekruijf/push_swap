/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_digit_to_char.c                                 :+:    :+:            */
/*                                                     +:+                    */
/*   By: mde-krui <mde-krui@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2023/11/14 14:54:31 by mde-krui      #+#    #+#                 */
/*   Updated: 2023/11/14 15:01:05 by mde-krui      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	ft_digit_to_char(int digit)
{
	if (digit >= 0 && digit <= 9)
		return (digit + '0');
	else
		return (digit - 10 + 'a');
}
