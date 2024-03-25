/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   parse_c.c                                          :+:    :+:            */
/*                                                     +:+                    */
/*   By: mde-krui <mde-krui@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2023/10/25 11:36:45 by mde-krui      #+#    #+#                 */
/*   Updated: 2023/11/21 23:32:42 by muijf         ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "../../include/printf.h"

char	ft_printf_parse_c(t_ft_printf_state *state)
{
	char	res;

	res = va_arg(*(state->args), int);
	state->len++;
	return (res);
}
