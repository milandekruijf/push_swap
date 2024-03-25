/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   distance.c                                         :+:    :+:            */
/*                                                     +:+                    */
/*   By: muijf <muijf@student.codam.nl>               +#+                     */
/*                                                   +#+                      */
/*   Created: 2024/02/21 13:28:08 by muijf         #+#    #+#                 */
/*   Updated: 2024/02/21 13:36:27 by muijf         ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	get_stack_distance(t_stack **stack, int index)
{
	t_stack	*head;
	int		distance;

	distance = 0;
	head = *stack;
	while (head)
	{
		if (head->index == index)
			break ;
		distance++;
		head = head->next;
	}
	return (distance);
}
