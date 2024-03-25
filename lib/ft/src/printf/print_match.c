/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   print_match.c                                      :+:    :+:            */
/*                                                     +:+                    */
/*   By: mde-krui <mde-krui@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2023/10/25 11:43:43 by mde-krui      #+#    #+#                 */
/*   Updated: 2023/11/21 23:32:21 by muijf         ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "../../include/printf.h"

void	ft_printf_print_match(t_ft_printf_state *state, char c)
{
	if (c == '%')
		return (ft_printf_print_percent(state));
	if (c == 'd')
		return (ft_printf_print_d(state));
	if (c == 'i')
		return (ft_printf_print_i(state));
	if (c == 's')
		return (ft_printf_print_s(state));
	if (c == 'c')
		return (ft_printf_print_c(state));
	if (c == 'p')
		return (ft_printf_print_p(state));
	if (c == 'u')
		return (ft_printf_print_u(state));
	if (c == 'x')
		return (ft_printf_print_x(state, 0));
	if (c == 'X')
		return (ft_printf_print_x(state, 1));
}
