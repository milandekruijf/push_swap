/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   print_percent.c                                    :+:    :+:            */
/*                                                     +:+                    */
/*   By: mde-krui <mde-krui@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2023/11/06 12:42:10 by mde-krui      #+#    #+#                 */
/*   Updated: 2023/11/21 23:35:26 by muijf         ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "../../include/libft.h"
#include "../../include/printf.h"

void	ft_printf_print_percent(t_ft_printf_state *state)
{
	ft_putc('%', state->fd);
	state->len++;
}
