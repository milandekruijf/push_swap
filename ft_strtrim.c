/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_strtrim.c                                       :+:    :+:            */
/*                                                     +:+                    */
/*   By: mde-krui <mde-krui@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2023/10/02 17:30:58 by mde-krui      #+#    #+#                 */
/*   Updated: 2023/10/09 15:34:11 by mde-krui      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strtrim(char const *s1, char const *set)
{
	size_t	l;
	size_t	r;

	if (!s1 || !set)
		return (NULL);
	l = 0;
	while (s1[l] && ft_strchr(set, s1[l]))
		l++;
	r = ft_strlen(s1) - 1;
	while (r > l && ft_strchr(set, s1[r]))
		r--;
	return (ft_substr(s1, l, r - l + 1));
}
