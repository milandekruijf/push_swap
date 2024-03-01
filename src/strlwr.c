/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   strlwr.c                                           :+:    :+:            */
/*                                                     +:+                    */
/*   By: muijf <muijf@student.codam.nl>               +#+                     */
/*                                                   +#+                      */
/*   Created: 2023/11/21 17:46:13 by muijf         #+#    #+#                 */
/*   Updated: 2024/03/01 11:11:12 by muijf         ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strlwr(char *str)
{
	char	*tmp;

	tmp = str;
	while (*tmp)
	{
		if (ft_isupper(*tmp))
			*tmp = ft_tolower((unsigned char)*tmp);
		tmp++;
	}
	return (str);
}
