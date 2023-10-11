/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_strrchr.c                                       :+:    :+:            */
/*                                                     +:+                    */
/*   By: mde-krui <mde-krui@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2023/10/02 15:19:15 by mde-krui      #+#    #+#                 */
/*   Updated: 2023/10/11 12:04:10 by mde-krui      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	char			*res;
	unsigned char	uc;

	res = NULL;
	uc = (unsigned char)c;
	while (*s)
	{
		if (*s == uc)
			res = (char *)s;
		s++;
	}
	if (uc == '\0')
		return ((char *)s);
	return (res);
}
