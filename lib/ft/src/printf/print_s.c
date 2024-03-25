/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   print_s.c                                          :+:    :+:            */
/*                                                     +:+                    */
/*   By: mde-krui <mde-krui@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2023/11/06 10:41:15 by mde-krui      #+#    #+#                 */
/*   Updated: 2023/11/21 23:35:32 by muijf         ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "../../include/libft.h"
#include "../../include/printf.h"

void	ft_printf_print_s(t_ft_printf_state *state)
{
	char	*s;

	s = ft_printf_parse_s(state);
	if (!s)
		return (ft_printf_print_null(state));
	ft_puts(s, state->fd);
}
