/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_strrchr.c                                       :+:    :+:            */
/*                                                     +:+                    */
/*   By: mde-krui <mde-krui@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2023/10/02 15:19:15 by mde-krui      #+#    #+#                 */
/*   Updated: 2023/10/09 15:03:47 by mde-krui      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	char			*r;
	unsigned char	uc;

	r = NULL;
	uc = (unsigned char)c;
	while (*s)
	{
		if (*s == uc)
			r = (char *)s;
		s++;
	}
	if (uc == '\0')
		return ((char *)s);
	return (r);
}
