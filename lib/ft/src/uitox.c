/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   uitox.c                                            :+:    :+:            */
/*                                                     +:+                    */
/*   By: mde-krui <mde-krui@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2023/11/14 15:11:38 by mde-krui      #+#    #+#                 */
/*   Updated: 2024/03/10 13:39:11 by mde-krui      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_uitox(unsigned int n, int base)
{
	char	*res;
	size_t	i;

	if (n == 0)
		return (ft_strdup("0"));
	res = malloc(sizeof(char) * 20);
	if (!res)
		return (NULL);
	i = 0;
	while (n != 0)
	{
		res[i++] = ft_digittoc(n % base);
		n /= base;
	}
	res[i] = '\0';
	ft_strrev(res);
	return (res);
}
