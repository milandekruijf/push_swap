/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   print.c                                            :+:    :+:            */
/*                                                     +:+                    */
/*   By: mde-krui <mde-krui@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2024/03/10 13:16:19 by mde-krui      #+#    #+#                 */
/*   Updated: 2024/03/10 13:17:49 by mde-krui      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "checker.h"

void	print_result(t_state *state)
{
	if (is_stack_sorted(state->a_stack))
		ft_printf("OK\n");
	else
		ft_printf("KO\n");
}
