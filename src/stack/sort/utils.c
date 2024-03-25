/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   stack.c                                            :+:    :+:            */
/*                                                     +:+                    */
/*   By: muijf <muijf@student.codam.nl>               +#+                     */
/*                                                   +#+                      */
/*   Created: 2024/02/21 13:16:06 by muijf         #+#    #+#                 */
/*   Updated: 2024/03/01 10:18:34 by muijf         ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	sort_stack(t_state *state)
{
	if (get_stack_size(*state->a_stack) <= 5)
		simple_sort(state);
	else
		radix_sort(state);
}

int	is_stack_sorted(t_stack **stack)
{
	t_stack	*head;

	head = *stack;
	while (head && head->next)
	{
		if (head->val > head->next->val)
			return (0);
		head = head->next;
	}
	return (1);
}
