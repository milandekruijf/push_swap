/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   create.c                                           :+:    :+:            */
/*                                                     +:+                    */
/*   By: muijf <muijf@student.codam.nl>               +#+                     */
/*                                                   +#+                      */
/*   Created: 2024/02/23 14:19:15 by muijf         #+#    #+#                 */
/*   Updated: 2024/03/01 13:30:40 by muijf         ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

t_stack	*create_stack(int num)
{
	t_stack	*stack;

	stack = (t_stack *)malloc(sizeof(*stack));
	if (!stack)
		return (NULL);
	stack->index = -1;
	stack->val = num;
	stack->next = NULL;
	return (stack);
}
