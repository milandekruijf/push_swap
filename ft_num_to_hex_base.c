/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_num_to_hex_base.c                               :+:    :+:            */
/*                                                     +:+                    */
/*   By: mde-krui <mde-krui@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2023/11/14 15:11:38 by mde-krui      #+#    #+#                 */
/*   Updated: 2023/11/20 11:56:38 by mde-krui      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_num_to_hex_base(unsigned int num, int base)
{
	char	*res;
	size_t	i;

	if (num == 0)
		return (ft_strdup("0"));
	res = malloc(sizeof(char) * 20);
	if (!res)
		return (NULL);
	i = 0;
	while (num != 0)
	{
		res[i++] = ft_digit_to_char(num % base);
		num /= base;
	}
	res[i] = '\0';
	ft_strrev(res);
	return (res);
}
