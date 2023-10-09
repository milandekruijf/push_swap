/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_substr.c                                        :+:    :+:            */
/*                                                     +:+                    */
/*   By: mde-krui <mde-krui@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2023/10/02 17:29:00 by mde-krui      #+#    #+#                 */
/*   Updated: 2023/10/09 15:44:15 by mde-krui      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	size_t	slen;
	char	*res;

	if (!s)
		return (NULL);
	slen = ft_strlen(s);
	if (start >= slen)
		return (NULL);
	if (len > slen - start)
		len = slen - start;
	res = (char *)ft_calloc(len + 1, sizeof(char));
	if (!res)
		return (NULL);
	ft_memcpy(res, s + start, len);
	res[len] = '\0';
	return (res);
}
