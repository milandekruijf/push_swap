/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   rotate.c                                           :+:    :+:            */
/*                                                     +:+                    */
/*   By: muijf <muijf@student.codam.nl>               +#+                     */
/*                                                   +#+                      */
/*   Created: 2024/02/21 13:01:07 by muijf         #+#    #+#                 */
/*   Updated: 2024/02/21 13:36:37 by muijf         ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	rotate_stack(t_stack **stack)
{
	t_stack	*head;
	t_stack	*tail;

	if (get_stack_size(*stack) < 2)
		return (-1);
	head = *stack;
	tail = get_last_stack(head);
	*stack = head->next;
	head->next = NULL;
	tail->next = head;
	return (0);
}

int	reverse_rotate_stack(t_stack **stack)
{
	t_stack	*head;
	t_stack	*tail;

	if (get_stack_size(*stack) < 2)
		return (-1);
	head = *stack;
	tail = get_last_stack(head);
	while (head)
	{
		if (head->next->next == NULL)
		{
			head->next = NULL;
			break ;
		}
		head = head->next;
	}
	tail->next = *stack;
	*stack = tail;
	return (0);
}
