/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   digitlen.c                                         :+:    :+:            */
/*                                                     +:+                    */
/*   By: muijf <muijf@student.codam.nl>               +#+                     */
/*                                                   +#+                      */
/*   Created: 2023/11/21 17:13:17 by muijf         #+#    #+#                 */
/*   Updated: 2023/11/21 17:37:24 by muijf         ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "../include/libft.h"

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
