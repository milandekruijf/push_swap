/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   push.c                                             :+:    :+:            */
/*                                                     +:+                    */
/*   By: muijf <muijf@student.codam.nl>               +#+                     */
/*                                                   +#+                      */
/*   Created: 2024/02/21 12:55:47 by muijf         #+#    #+#                 */
/*   Updated: 2024/02/21 13:36:35 by muijf         ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	push_stack(t_stack **to_stack, t_stack **from_stack)
{
	t_stack	*tmp;
	t_stack	*head_to;
	t_stack	*head_from;

	if (get_stack_size(*from_stack) == 0)
		return (-1);
	head_to = *to_stack;
	head_from = *from_stack;
	tmp = head_from;
	head_from = head_from->next;
	*from_stack = head_from;
	if (!head_to)
	{
		head_to = tmp;
		head_to->next = NULL;
		*to_stack = head_to;
	}
	else
	{
		tmp->next = head_to;
		*to_stack = tmp;
	}
	return (0);
}
