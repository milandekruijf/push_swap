/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   putnbr.c                                           :+:    :+:            */
/*                                                     +:+                    */
/*   By: mde-krui <mde-krui@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2023/10/02 17:36:17 by mde-krui      #+#    #+#                 */
/*   Updated: 2023/11/21 18:19:41 by muijf         ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "../include/libft.h"

void	ft_putnbr(int n, int fd)
{
	ft_putstr(ft_itoa(n), fd);
}
