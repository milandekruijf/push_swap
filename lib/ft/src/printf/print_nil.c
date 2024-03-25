/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   print_nil.c                                        :+:    :+:            */
/*                                                     +:+                    */
/*   By: mde-krui <mde-krui@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2023/11/06 10:42:34 by mde-krui      #+#    #+#                 */
/*   Updated: 2023/11/21 23:35:10 by muijf         ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "../../include/libft.h"
#include "../../include/printf.h"

void	ft_printf_print_nil(t_ft_printf_state *state)
{
	ft_puts("(nil)", state->fd);
	state->len += 5;
}
