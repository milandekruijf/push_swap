/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_memcpy.c                                        :+:    :+:            */
/*                                                     +:+                    */
/*   By: mde-krui <mde-krui@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2023/10/02 14:52:56 by mde-krui      #+#    #+#                 */
/*   Updated: 2023/10/09 15:03:15 by mde-krui      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dest, const void *src, size_t n)
{
	unsigned char	*srcptr;
	unsigned char	*destptr;

	srcptr = (unsigned char *)src;
	destptr = (unsigned char *)dest;
	while (n-- > 0)
		*destptr++ = *srcptr++;
	return (dest);
}
