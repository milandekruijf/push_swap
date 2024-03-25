/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   main.c                                             :+:    :+:            */
/*                                                     +:+                    */
/*   By: mde-krui <mde-krui@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2023/12/14 11:41:48 by mde-krui      #+#    #+#                 */
/*   Updated: 2024/03/01 10:12:36 by muijf         ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	main(int argc, char **argv)
{
	t_state	state;

	state = init_state(argc, argv);
	if (is_stack_sorted(state.a_stack))
	{
		free_state(&state);
		return (EXIT_SUCCESS);
	}
	sort_stack(&state);
	free_state(&state);
	return (EXIT_SUCCESS);
}
