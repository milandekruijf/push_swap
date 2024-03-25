/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   append.c                                           :+:    :+:            */
/*                                                     +:+                    */
/*   By: muijf <muijf@student.codam.nl>               +#+                     */
/*                                                   +#+                      */
/*   Created: 2024/03/01 10:19:25 by muijf         #+#    #+#                 */
/*   Updated: 2024/03/01 10:19:32 by muijf         ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	append_to_stack(t_stack **stack, t_stack *new_stack)
{
	t_stack	*last_stack;

	if (!stack)
		return ;
	if (*stack)
	{
		last_stack = get_last_stack(*stack);
		last_stack->next = new_stack;
		return ;
	}
	*stack = new_stack;
}
