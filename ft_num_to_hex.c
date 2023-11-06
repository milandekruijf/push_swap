/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_num_to_hex.c                                    :+:    :+:            */
/*                                                     +:+                    */
/*   By: mde-krui <mde-krui@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2023/11/06 11:28:05 by mde-krui      #+#    #+#                 */
/*   Updated: 2023/11/06 13:48:43 by mde-krui      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_num_to_hex(unsigned int num)
{
	char	*str;
	int		digits;

	digits = ft_count_xdigits(num) + 2;
	str = (char *)malloc(digits + 1);
	if (str == NULL)
		return (NULL);
	str[0] = '0';
	str[1] = 'x';
	str[digits] = '\0';
	while (num > 0)
	{
		if (num % 16 < 10)
			str[--digits] = num % 16 + '0';
		else
			str[--digits] = num % 16 - 10 + 'A';
		num /= 16;
	}
	return (str);
}
