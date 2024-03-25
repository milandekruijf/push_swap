/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   print_d.c                                          :+:    :+:            */
/*                                                     +:+                    */
/*   By: mde-krui <mde-krui@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2023/11/06 10:41:15 by mde-krui      #+#    #+#                 */
/*   Updated: 2023/11/21 23:43:52 by muijf         ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "../../include/libft.h"
#include "../../include/printf.h"

void	ft_printf_print_d(t_ft_printf_state *state)
{
	char	*d;

	d = ft_printf_parse_d(state);
	if (!d)
		return (ft_printf_print_null(state));
	ft_puts(d, state->fd);
	free(d);
}
