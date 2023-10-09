/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_strdup.c                                        :+:    :+:            */
/*                                                     +:+                    */
/*   By: mde-krui <mde-krui@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2023/10/02 17:12:40 by mde-krui      #+#    #+#                 */
/*   Updated: 2023/10/09 15:43:42 by mde-krui      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static char	*ft_strndup(const char *s, size_t n)
{
	char	*res;

	res = (char *)ft_calloc(n + 1, sizeof(char));
	if (!res)
		return (NULL);
	ft_memcpy(res, s, n);
	res[n] = '\0';
	return (res);
}

char	*ft_strdup(const char *s)
{
	return (ft_strndup(s, sizeof(char) * ft_strlen(s)));
}
