/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   digitlen.c                                         :+:    :+:            */
/*                                                     +:+                    */
/*   By: muijf <muijf@student.codam.nl>               +#+                     */
/*                                                   +#+                      */
/*   Created: 2023/11/21 17:13:17 by muijf         #+#    #+#                 */
/*   Updated: 2024/03/01 11:11:12 by muijf         ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_digitlen(int n, int base)
{
	int	res;

	res = 1;
	while (n / base)
	{
		res++;
		n /= base;
	}
	return (res);
}
