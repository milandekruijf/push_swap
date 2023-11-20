/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_count_int_digits_base.c                         :+:    :+:            */
/*                                                     +:+                    */
/*   By: mde-krui <mde-krui@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2023/11/06 11:28:05 by mde-krui      #+#    #+#                 */
/*   Updated: 2023/11/20 11:21:45 by mde-krui      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_count_int_digits_base(int num, int base)
{
	size_t	res;

	res = 1;
	while (num / base)
	{
		res++;
		num /= base;
	}
	return (res);
}
