/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   print_c.c                                          :+:    :+:            */
/*                                                     +:+                    */
/*   By: mde-krui <mde-krui@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2023/11/06 10:41:15 by mde-krui      #+#    #+#                 */
/*   Updated: 2023/11/21 23:34:54 by muijf         ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "../../include/libft.h"
#include "../../include/printf.h"

void	ft_printf_print_c(t_ft_printf_state *state)
{
	char	c;

	c = ft_printf_parse_c(state);
	if (c != '\0' && !c)
		return (ft_printf_print_null(state));
	ft_putc(c, state->fd);
}
