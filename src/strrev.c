/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   strrev.c                                           :+:    :+:            */
/*                                                     +:+                    */
/*   By: mde-krui <mde-krui@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2023/11/14 15:19:28 by mde-krui      #+#    #+#                 */
/*   Updated: 2023/11/21 17:12:18 by muijf         ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "../include/libft.h"

void	ft_strrev(char *str)
{
	size_t	len;
	char	tmp;
	size_t	i;
	size_t	j;

	if (!str)
		return ;
	len = ft_strlen(str);
	i = 0;
	j = len - 1;
	while (i < j)
	{
		tmp = str[i];
		str[i] = str[j];
		str[j] = tmp;
		i++;
		j--;
	}
}
