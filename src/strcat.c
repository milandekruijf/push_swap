/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   strcat.c                                           :+:    :+:            */
/*                                                     +:+                    */
/*   By: mde-krui <mde-krui@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2023/10/02 16:55:53 by mde-krui      #+#    #+#                 */
/*   Updated: 2023/11/21 17:58:34 by muijf         ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "../include/libft.h"

char	*ft_strcat(char *dest, const char *src)
{
	char	*tmp;

	tmp = dest;
	while (*tmp)
		tmp++;
	ft_strncat(tmp, src, ft_strlen(src));
	return (dest);
}
