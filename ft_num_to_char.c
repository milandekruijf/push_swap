/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_num_to_char.c                                   :+:    :+:            */
/*                                                     +:+                    */
/*   By: mde-krui <mde-krui@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2023/11/14 14:54:31 by mde-krui      #+#    #+#                 */
/*   Updated: 2023/11/14 14:54:40 by mde-krui      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	ft_num_to_char(int num)
{
	if (num >= 0 && num <= 9)
		return (num + '0');
	else
		return (num - 10 + 'a');
}
