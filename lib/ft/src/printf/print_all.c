/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   print_all.c                                        :+:    :+:            */
/*                                                     +:+                    */
/*   By: mde-krui <mde-krui@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2023/10/25 11:43:43 by mde-krui      #+#    #+#                 */
/*   Updated: 2023/11/21 23:34:16 by muijf         ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "../../include/libft.h"
#include "../../include/printf.h"

void	ft_printf_print_all(t_ft_printf_state *state)
{
	while (state->format[state->i])
	{
		if (state->format[state->i] == '%')
			ft_printf_print_match(state, state->format[++(state->i)]);
		else
		{
			ft_putc(state->format[state->i], state->fd);
			state->len++;
		}
		(state->i)++;
	}
}
