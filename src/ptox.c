/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ptox.c                                             :+:    :+:            */
/*                                                     +:+                    */
/*   By: mde-krui <mde-krui@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2023/11/14 14:28:42 by mde-krui      #+#    #+#                 */
/*   Updated: 2024/03/01 11:11:12 by muijf         ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_ptox(const void *p)
{
	char	*res;
	int		i;
	int		len;

	len = sizeof(void *) * 2 - 1;
	while (len > 0 && (((unsigned long long int)p >> (4 * len)) & 0xF) == 0)
		len--;
	res = (char *)malloc(sizeof(char) * (len + 4));
	if (!res)
		return (NULL);
	i = 0;
	res[i++] = '0';
	res[i++] = 'x';
	while (i < len + 3)
	{
		res[i] = "0123456789abcdef"[((unsigned long long int)p >> (4 * (len - i
						+ 2))) & 0xF];
		i++;
	}
	res[i] = '\0';
	return (res);
}
