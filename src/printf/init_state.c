/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   init_state.c                                       :+:    :+:            */
/*                                                     +:+                    */
/*   By: mde-krui <mde-krui@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2023/10/25 11:40:32 by mde-krui      #+#    #+#                 */
/*   Updated: 2023/11/21 23:32:44 by muijf         ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "../../include/printf.h"

void	ft_printf_init_state(t_ft_printf_state *state, va_list *args,
		const char *format, int fd)
{
	state->len = 0;
	state->i = 0;
	state->format = format;
	state->args = args;
	state->fd = fd;
}
