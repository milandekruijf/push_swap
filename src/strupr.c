/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   strupr.c                                           :+:    :+:            */
/*                                                     +:+                    */
/*   By: mde-krui <mde-krui@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2023/11/06 12:20:06 by mde-krui      #+#    #+#                 */
/*   Updated: 2024/03/01 11:11:12 by muijf         ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strupr(char *str)
{
	char	*tmp;

	tmp = str;
	while (*tmp)
	{
		if (ft_islower(*tmp))
			*tmp = ft_toupper((unsigned char)*tmp);
		tmp++;
	}
	return (str);
}
