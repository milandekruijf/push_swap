/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   min.c                                              :+:    :+:            */
/*                                                     +:+                    */
/*   By: muijf <muijf@student.codam.nl>               +#+                     */
/*                                                   +#+                      */
/*   Created: 2024/02/21 13:32:34 by muijf         #+#    #+#                 */
/*   Updated: 2024/03/25 12:38:13 by mde-krui      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

t_stack	*get_next_min_stack(t_stack **stack)
{
	t_stack	*head_stack;
	t_stack	*min_stack;
	bool	has_min_stack;

	head_stack = *stack;
	if (!head_stack)
		return (NULL);
	min_stack = NULL;
	has_min_stack = false;
	while (head_stack)
	{
		if ((head_stack->index == -1) && (!has_min_stack
				|| head_stack->val < min_stack->val))
		{
			min_stack = head_stack;
			has_min_stack = true;
		}
		head_stack = head_stack->next;
	}
	return (min_stack);
}
