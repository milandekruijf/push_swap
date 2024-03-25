/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   swap.c                                             :+:    :+:            */
/*                                                     +:+                    */
/*   By: muijf <muijf@student.codam.nl>               +#+                     */
/*                                                   +#+                      */
/*   Created: 2024/02/21 12:56:47 by muijf         #+#    #+#                 */
/*   Updated: 2024/02/23 14:38:15 by muijf         ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	swap_stack(t_stack **stack)
{
	t_stack	*head;
	t_stack	*next;
	int		tmp_val;
	int		tmp_index;

	if (get_stack_size(*stack) < 2)
		return (-1);
	head = *stack;
	next = head->next;
	if (!head && !next)
		exit_with_error("Error: couldn't swap");
	tmp_val = head->val;
	tmp_index = head->index;
	head->val = next->val;
	head->index = next->index;
	next->val = tmp_val;
	next->index = tmp_index;
	return (0);
}
