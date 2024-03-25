/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   print.c                                            :+:    :+:            */
/*                                                     +:+                    */
/*   By: mde-krui <mde-krui@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2023/10/25 11:56:49 by mde-krui      #+#    #+#                 */
/*   Updated: 2023/11/21 23:31:52 by muijf         ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "../../include/printf.h"

int	ft_printf(const char *format, ...)
{
	t_ft_printf_state	state;
	va_list				args;

	va_start(args, format);
	ft_printf_init_state(&state, &args, format, 1);
	ft_printf_print_all(&state);
	va_end(args);
	return (state.len);
}
