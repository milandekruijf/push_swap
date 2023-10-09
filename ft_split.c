/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_split.c                                         :+:    :+:            */
/*                                                     +:+                    */
/*   By: mde-krui <mde-krui@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2023/10/02 17:31:32 by mde-krui      #+#    #+#                 */
/*   Updated: 2023/10/09 15:58:20 by mde-krui      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static size_t	ft_wrdcnt(const char *str, char delim)
{
	size_t	wrdcnt;

	if (!*str)
		return (0);
	wrdcnt = 1;
	while (*str)
	{
		if (*str == delim)
			wrdcnt++;
		str++;
	}
	return (wrdcnt);
}

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

static char	*ft_split_word(const char **s, char c)
{
	size_t	i;
	char	*res;

	i = 0;
	while (**s == c)
		(*s)++;
	while ((*s)[i] && (*s)[i] != c)
		i++;
	res = ft_strndup(*s, i);
	if (!res)
		return (NULL);
	*s += i;
	return (res);
}

char	**ft_split(char const *s, char c)
{
	char	**res;
	size_t	i;
	size_t	wrdcnt;

	if (!s)
		return (NULL);
	wrdcnt = ft_wrdcnt(s, c);
	res = (char **)ft_calloc(wrdcnt + 1, sizeof(char *));
	if (!res)
		return (NULL);
	i = 0;
	while (wrdcnt-- > 0)
	{
		res[i++] = ft_split_word(&s, c);
		if (!res[i - 1])
		{
			while (i > 0)
				free(res[--i]);
			free(res);
			return (NULL);
		}
	}
	res[i] = NULL;
	return (res);
}
