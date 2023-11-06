/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_strcapitalize.c                                 :+:    :+:            */
/*                                                     +:+                    */
/*   By: mde-krui <mde-krui@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2023/11/06 12:20:06 by mde-krui      #+#    #+#                 */
/*   Updated: 2023/11/06 12:27:58 by mde-krui      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strcapitalize(char *str)
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
