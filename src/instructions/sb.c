/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   sb.c                                               :+:    :+:            */
/*                                                     +:+                    */
/*   By: muijf <muijf@student.codam.nl>               +#+                     */
/*                                                   +#+                      */
/*   Created: 2024/02/21 13:03:41 by muijf         #+#    #+#                 */
/*   Updated: 2024/03/01 13:40:06 by muijf         ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	sb(t_stack **b_stack)
{
	if (swap_stack(b_stack) == -1)
		return (-1);
	ft_printf("sb\n");
	return (0);
}
