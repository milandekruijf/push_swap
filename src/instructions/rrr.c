/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   rrr.c                                              :+:    :+:            */
/*                                                     +:+                    */
/*   By: muijf <muijf@student.codam.nl>               +#+                     */
/*                                                   +#+                      */
/*   Created: 2024/02/21 13:03:41 by muijf         #+#    #+#                 */
/*   Updated: 2024/03/01 13:40:00 by muijf         ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	rrr(t_stack **a_stack, t_stack **b_stack)
{
	if ((get_stack_size(*a_stack) < 2) || (get_stack_size(*b_stack) < 2))
		return (-1);
	reverse_rotate_stack(a_stack);
	reverse_rotate_stack(b_stack);
	ft_printf("rrr\n");
	return (0);
}
