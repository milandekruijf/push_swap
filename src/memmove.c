/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   memmove.c                                          :+:    :+:            */
/*                                                     +:+                    */
/*   By: mde-krui <mde-krui@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2023/10/02 14:59:44 by mde-krui      #+#    #+#                 */
/*   Updated: 2023/11/21 16:59:47 by muijf         ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "../include/libft.h"

void	*ft_memmove(void *dest, const void *src, size_t n)
{
	size_t			i;
	unsigned char	*tmp;

	tmp = (unsigned char *)dest;
	if (dest > src)
	{
		i = n;
		while (i-- > 0)
			tmp[i] = ((unsigned char *)src)[i];
	}
	else
		ft_memcpy(dest, src, n);
	return (dest);
}
