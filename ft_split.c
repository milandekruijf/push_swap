/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_split.c                                         :+:    :+:            */
/*                                                     +:+                    */
/*   By: mde-krui <mde-krui@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2023/10/02 17:31:32 by mde-krui      #+#    #+#                 */
/*   Updated: 2023/10/11 10:44:43 by mde-krui      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static size_t	ft_wrdcnt(char const *s, char c)
{
	size_t	count;

	if (!*s)
		return (0);
	count = 0;
	while (*s)
	{
		while (*s == c)
			s++;
		if (*s)
			count++;
		while (*s != c && *s)
			s++;
	}
	return (count);
}

char	**ft_split(char const *s, char c)
{
	char	**res;
	size_t	wrdcnt;
	size_t	i;

	res = (char **)malloc(sizeof(char *) * (ft_wrdcnt(s, c) + 1));
	if (!s || !res)
		return (0);
	i = 0;
	while (*s)
	{
		while (*s == c && *s)
			s++;
		if (*s)
		{
			if (!ft_strchr(s, c))
				wrdcnt = ft_strlen(s);
			else
				wrdcnt = ft_strchr(s, c) - s;
			res[i++] = ft_substr(s, 0, wrdcnt);
			s += wrdcnt;
		}
	}
	res[i] = NULL;
	return (res);
}
