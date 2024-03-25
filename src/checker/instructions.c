/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   instructions.c                                     :+:    :+:            */
/*                                                     +:+                    */
/*   By: mde-krui <mde-krui@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2024/03/10 13:20:49 by mde-krui      #+#    #+#                 */
/*   Updated: 2024/03/10 15:34:28 by mde-krui      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "checker.h"

void	do_instruction(char *instruction, t_state *state)
{
	if (ft_strcmp(instruction, "sa") == 0 || ft_strcmp(instruction, "ss") == 0)
		swap_stack(state->a_stack);
	if (ft_strcmp(instruction, "sb") == 0 || ft_strcmp(instruction, "ss") == 0)
		swap_stack(state->b_stack);
	if (ft_strcmp(instruction, "pa") == 0)
		push_stack(state->a_stack, state->b_stack);
	if (ft_strcmp(instruction, "pb") == 0)
		push_stack(state->b_stack, state->a_stack);
	if (ft_strcmp(instruction, "ra") == 0 || ft_strcmp(instruction, "rr") == 0)
		rotate_stack(state->a_stack);
	if (ft_strcmp(instruction, "rb") == 0 || ft_strcmp(instruction, "rr") == 0)
		rotate_stack(state->b_stack);
	if (ft_strcmp(instruction, "rra") == 0 || ft_strcmp(instruction,
			"rrr") == 0)
		reverse_rotate_stack(state->a_stack);
	if (ft_strcmp(instruction, "rrb") == 0 || ft_strcmp(instruction,
			"rrr") == 0)
		reverse_rotate_stack(state->b_stack);
}
