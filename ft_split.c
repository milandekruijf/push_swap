/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_split.c                                         :+:    :+:            */
/*                                                     +:+                    */
/*   By: mde-krui <mde-krui@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2023/10/02 17:31:32 by mde-krui      #+#    #+#                 */
/*   Updated: 2023/10/14 16:04:16 by mde-krui      ########   odam.nl         */
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

static void	*ft_split_memcheck(char **split, size_t i)
{
	if (!split[i])
	{
		while (i > 0)
			free(split[--i]);
		free(split);
		return (NULL);
	}
	return ((void *)1);
}

char	**ft_split(char const *s, char c)
{
	char	**res;
	size_t	len;
	size_t	i;

	res = (char **)malloc(sizeof(char *) * (ft_wrdcnt(s, c) + 1));
	if (!res || !s)
		return (NULL);
	i = 0;
	while (*s)
	{
		while (*s == c && *s)
			s++;
		if (!*s)
			continue ;
		if (!ft_strchr(s, c))
			len = ft_strlen(s);
		else
			len = ft_strchr(s, c) - s;
		res[i++] = ft_substr(s, 0, len);
		if (!ft_split_memcheck(res, i - 1))
			return (NULL);
		s += len;
	}
	res[i] = NULL;
	return (res);
}
