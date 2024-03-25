/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   radix.c                                            :+:    :+:            */
/*                                                     +:+                    */
/*   By: muijf <muijf@student.codam.nl>               +#+                     */
/*                                                   +#+                      */
/*   Created: 2024/02/21 13:14:14 by muijf         #+#    #+#                 */
/*   Updated: 2024/02/23 14:32:50 by muijf         ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	radix_sort(t_state *state)
{
	t_stack	*a_head;
	int		i;
	int		j;
	int		size;
	int		max_bits;

	i = 0;
	a_head = *state->a_stack;
	size = get_stack_size(a_head);
	max_bits = get_stack_max_bits(state->a_stack);
	while (i < max_bits)
	{
		j = 0;
		while (j++ < size)
		{
			a_head = *state->a_stack;
			if (((a_head->index >> i) & 1) == 1)
				ra(state->a_stack);
			else
				pb(state->a_stack, state->b_stack);
		}
		while (get_stack_size(*state->b_stack) != 0)
			pa(state->a_stack, state->b_stack);
		i++;
	}
}
