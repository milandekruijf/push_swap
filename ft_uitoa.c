/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_uitoa.c                                         :+:    :+:            */
/*                                                     +:+                    */
/*   By: mde-krui <mde-krui@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2023/10/02 17:32:12 by mde-krui      #+#    #+#                 */
/*   Updated: 2023/11/20 10:52:51 by mde-krui      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_uitoa(unsigned int num)
{
	char	*res;
	int		len;

	len = ft_count_unsigned_int_digits(num);
	res = (char *)malloc(sizeof(char) * (len + 1));
	if (!res)
		return (0);
	res[len] = '\0';
	while (num != 0)
	{
		res[len - 1] = num % 10 + 48;
		num = num / 10;
		len--;
	}
	return (res);
}

#include <stdio.h>

int	main(void)
{
	printf("%s\n", ft_uitoa(4294967295));
}