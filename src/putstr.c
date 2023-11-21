/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   putstr.c                                           :+:    :+:            */
/*                                                     +:+                    */
/*   By: mde-krui <mde-krui@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2023/10/02 17:35:12 by mde-krui      #+#    #+#                 */
/*   Updated: 2023/11/21 18:18:49 by muijf         ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "../include/libft.h"

void	ft_putstr(const char *s, int fd)
{
	write(fd, s, sizeof(char) * ft_strlen(s));
}
