/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   strmapi.c                                          :+:    :+:            */
/*                                                     +:+                    */
/*   By: mde-krui <mde-krui@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2023/10/02 17:32:42 by mde-krui      #+#    #+#                 */
/*   Updated: 2023/11/21 17:45:19 by muijf         ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "../include/libft.h"

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	size_t	i;
	char	*res;

	if (!s || !f)
		return (NULL);
	res = ft_strdup(s);
	i = 0;
	while (s[i])
	{
		res[i] = f((unsigned int)i, s[i]);
		i++;
	}
	return (res);
}
