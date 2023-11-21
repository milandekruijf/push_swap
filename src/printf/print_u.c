/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   print_u.c                                          :+:    :+:            */
/*                                                     +:+                    */
/*   By: mde-krui <mde-krui@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2023/11/06 10:41:15 by mde-krui      #+#    #+#                 */
/*   Updated: 2023/11/21 23:35:39 by muijf         ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "../../include/libft.h"
#include "../../include/printf.h"

void	ft_printf_print_u(t_ft_printf_state *state)
{
	char	*u;

	u = ft_printf_parse_u(state);
	if (!u)
		return (ft_printf_print_null(state));
	ft_puts(u, state->fd);
	free(u);
}
