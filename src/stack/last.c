/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   last.c                                             :+:    :+:            */
/*                                                     +:+                    */
/*   By: muijf <muijf@student.codam.nl>               +#+                     */
/*                                                   +#+                      */
/*   Created: 2024/03/01 10:20:06 by muijf         #+#    #+#                 */
/*   Updated: 2024/03/10 12:59:59 by mde-krui      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

t_stack	*get_last_stack(t_stack *stack)
{
	while (stack)
	{
		if (!stack->next)
			return (stack);
		stack = stack->next;
	}
	return (stack);
}
