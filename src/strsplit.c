/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   strsplit.c                                         :+:    :+:            */
/*                                                     +:+                    */
/*   By: mde-krui <mde-krui@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2023/10/02 17:31:32 by mde-krui      #+#    #+#                 */
/*   Updated: 2024/03/01 11:11:12 by muijf         ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static void	*ft_strsplit_memcheck(char **split, size_t i)
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

char	**ft_strsplit(char const *s, char c)
{
	char	**res;
	size_t	len;
	size_t	i;

	res = (char **)malloc(sizeof(char *) * (ft_wrdlen(s, c) + 1));
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
		res[i++] = ft_strsub(s, 0, len);
		if (!ft_strsplit_memcheck(res, i - 1))
			return (NULL);
		s += len;
	}
	res[i] = NULL;
	return (res);
}
