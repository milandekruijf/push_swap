/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_count_xdigits.c                                 :+:    :+:            */
/*                                                     +:+                    */
/*   By: mde-krui <mde-krui@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2023/11/06 11:28:05 by mde-krui      #+#    #+#                 */
/*   Updated: 2023/11/06 13:44:52 by mde-krui      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_count_xdigits(int num)
{
	size_t	digit_count;

	digit_count = 0;
	while (num > 0)
	{
		num /= 16;
		digit_count++;
	}
	return (digit_count);
}
