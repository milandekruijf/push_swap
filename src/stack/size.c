/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   size.c                                             :+:    :+:            */
/*                                                     +:+                    */
/*   By: muijf <muijf@student.codam.nl>               +#+                     */
/*                                                   +#+                      */
/*   Created: 2024/03/01 10:19:43 by muijf         #+#    #+#                 */
/*   Updated: 2024/03/01 10:19:48 by muijf         ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	get_stack_size(t_stack *stack)
{
	size_t	res;

	res = 0;
	while (stack)
	{
		stack = stack->next;
		res++;
	}
	return (res);
}
