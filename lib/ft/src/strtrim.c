/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   strtrim.c                                          :+:    :+:            */
/*                                                     +:+                    */
/*   By: mde-krui <mde-krui@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2023/10/02 17:30:58 by mde-krui      #+#    #+#                 */
/*   Updated: 2024/03/01 11:11:12 by muijf         ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strtrim(const char *s, const char *set)
{
	size_t	left;
	size_t	right;

	if (!s || !set)
		return (NULL);
	left = 0;
	while (s[left] && ft_strchr(set, s[left]))
		left++;
	right = ft_strlen(s) - 1;
	while (right > left && ft_strchr(set, s[right]))
		right--;
	return (ft_strsub(s, left, right - left + 1));
}
