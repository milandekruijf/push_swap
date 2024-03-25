/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   state.c                                            :+:    :+:            */
/*                                                     +:+                    */
/*   By: muijf <muijf@student.codam.nl>               +#+                     */
/*                                                   +#+                      */
/*   Created: 2024/02/23 13:34:07 by muijf         #+#    #+#                 */
/*   Updated: 2024/03/25 11:57:31 by mde-krui      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	malloc_state(t_state *state)
{
	state->a_stack = (t_stack **)malloc(sizeof(t_stack));
	state->b_stack = (t_stack **)malloc(sizeof(t_stack));
	if (!state->a_stack || !state->b_stack)
		exit_with_error(state, "malloc failed");
}

t_state	init_state(int argc, char **argv)
{
	t_state	state;
	int		i;

	malloc_state(&state);
	*state.a_stack = NULL;
	*state.b_stack = NULL;
	extract_args(&state, argc, argv);
	i = 0;
	while (state.args[i])
		append_to_stack(state.a_stack, create_stack(ft_atoi(state.args[i++])));
	index_stack(state.a_stack);
	return (state);
}

void	free_state(t_state *state)
{
	free_stack(state->a_stack);
	free_stack(state->b_stack);
	free_args(state);
}
