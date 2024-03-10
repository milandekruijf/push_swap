/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   strdupv.c                                          :+:    :+:            */
/*                                                     +:+                    */
/*   By: mde-krui <mde-krui@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2024/03/10 15:22:42 by mde-krui      #+#    #+#                 */
/*   Updated: 2024/03/10 15:31:26 by mde-krui      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static void	free_strdupv(char **dst, int i)
{
	while (i > 0)
		free(dst[i--]);
	free(dst);
}

char	**ft_strdupv(char *const *src)
{
	int		i;
	int		cnt;
	char	**dst;

	cnt = 0;
	while (src[cnt])
		cnt++;
	dst = (char **)malloc(sizeof(char *) * (cnt + 1));
	if (!dst)
		return (NULL);
	i = 0;
	while (i < cnt)
	{
		dst[i] = ft_strdup(src[i]);
		if (!dst[i])
		{
			free_strdupv(dst, i);
			return (NULL);
		}
		i++;
	}
	dst[cnt] = NULL;
	return (dst);
}
