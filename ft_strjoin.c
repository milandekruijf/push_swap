/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_strjoin.c                                       :+:    :+:            */
/*                                                     +:+                    */
/*   By: mde-krui <mde-krui@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2023/10/02 17:30:20 by mde-krui      #+#    #+#                 */
/*   Updated: 2023/10/09 15:30:26 by mde-krui      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	char	*res;
	size_t	s1len;
	size_t	s2len;

	if (!s1 || !s2)
		return (NULL);
	s1len = ft_strlen(s1);
	s2len = ft_strlen(s2);
	res = (char *)ft_calloc(s1len + s2len + 1, sizeof(char));
	if (!res)
		return (NULL);
	ft_memcpy(res, s1, s1len);
	ft_memcpy(res + s1len, s2, s2len);
	return (res);
}
