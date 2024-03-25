/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   state.c                                            :+:    :+:            */
/*                                                     +:+                    */
/*   By: muijf <muijf@student.codam.nl>               +#+                     */
/*                                                   +#+                      */
/*   Created: 2024/02/23 13:34:07 by muijf         #+#    #+#                 */
/*   Updated: 2024/03/25 12:42:03 by mde-krui      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

t_state	*malloc_stacks(t_state *state)
{
	state->a_stack = (t_stack **)malloc(sizeof(t_stack));
	if (!state->a_stack)
		return (NULL);
	*state->a_stack = NULL;
	state->b_stack = (t_stack **)malloc(sizeof(t_stack));
	if (!state->b_stack)
	{
		free_stack(state->a_stack);
		return (NULL);
	}
	*state->b_stack = NULL;
	return (state);
}

void	create_stacks(t_state *state)
{
	int		i;
	t_stack	*stack;

	i = 0;
	while (state->args[i])
	{
		stack = create_stack(ft_atoi(state->args[i]));
		if (!stack)
		{
			free_state(state);
			exit_with_error("malloc failed for stack");
		}
		append_to_stack(state->a_stack, stack);
		i++;
	}
}

t_state	init_state(int argc, char **argv)
{
	t_state	state;

	extract_args(&state, argc, argv);
	if (!malloc_stacks(&state))
	{
		free_args(&state);
		exit_with_error("malloc failed for stacks");
	}
	create_stacks(&state);
	index_stack(state.a_stack);
	return (state);
}

void	free_state(t_state *state)
{
	free_stack(state->a_stack);
	free_stack(state->b_stack);
	free_args(state);
}
