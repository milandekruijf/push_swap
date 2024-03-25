/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   index.c                                            :+:    :+:            */
/*                                                     +:+                    */
/*   By: muijf <muijf@student.codam.nl>               +#+                     */
/*                                                   +#+                      */
/*   Created: 2024/02/21 13:25:59 by muijf         #+#    #+#                 */
/*   Updated: 2024/03/25 12:39:57 by mde-krui      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	index_stack(t_stack **stack)
{
	t_stack	*head_stack;
	int		index;

	index = 0;
	head_stack = get_next_min_stack(stack);
	while (head_stack)
	{
		head_stack->index = index++;
		head_stack = get_next_min_stack(stack);
	}
}

int	get_stack_min_index(t_stack **stack, int val)
{
	t_stack	*head_stack;
	int		min_index;

	head_stack = *stack;
	min_index = head_stack->index;
	while (head_stack->next)
	{
		head_stack = head_stack->next;
		if ((head_stack->index < min_index) && head_stack->index != val)
			min_index = head_stack->index;
	}
	return (min_index);
}
