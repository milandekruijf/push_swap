/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   print_x.c                                          :+:    :+:            */
/*                                                     +:+                    */
/*   By: mde-krui <mde-krui@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2023/11/06 10:41:15 by mde-krui      #+#    #+#                 */
/*   Updated: 2023/11/21 23:35:45 by muijf         ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "../../include/libft.h"
#include "../../include/printf.h"

void	ft_printf_print_x(t_ft_printf_state *state, bool upper)
{
	char	*x;

	x = ft_printf_parse_x(state, upper);
	if (!x)
		return (ft_printf_print_null(state));
	ft_puts(x, state->fd);
	free(x);
}
