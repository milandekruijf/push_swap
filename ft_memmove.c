/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_memmove.c                                       :+:    :+:            */
/*                                                     +:+                    */
/*   By: mde-krui <mde-krui@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2023/10/02 14:59:44 by mde-krui      #+#    #+#                 */
/*   Updated: 2023/10/11 11:11:00 by mde-krui      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	ft_is_mem_overlap(void *a, void *b, size_t n)
{
	size_t			i;
	unsigned char	*aptr;
	unsigned char	*bptr;

	i = 0;
	aptr = (unsigned char *)a;
	bptr = (unsigned char *)b;
	while (i < n)
	{
		if (aptr + i == bptr || bptr + i == aptr)
			return (1);
		i++;
	}
	return (0);
}

void	*ft_memmove(void *dest, const void *src, size_t n)
{
	size_t			i;
	unsigned char	*srcptr;
	unsigned char	*destptr;

	srcptr = (unsigned char *)src;
	destptr = (unsigned char *)dest;
	if (ft_is_mem_overlap(srcptr, destptr, n))
	{
		i = n;
		while (i-- > 0)
			destptr[i] = srcptr[i];
	}
	else
		ft_memcpy(destptr, srcptr, n);
	return (dest);
}
