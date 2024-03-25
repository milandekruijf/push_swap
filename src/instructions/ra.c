/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ra.c                                               :+:    :+:            */
/*                                                     +:+                    */
/*   By: muijf <muijf@student.codam.nl>               +#+                     */
/*                                                   +#+                      */
/*   Created: 2024/02/21 13:03:41 by muijf         #+#    #+#                 */
/*   Updated: 2024/03/01 13:39:42 by muijf         ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	ra(t_stack **a_stack)
{
	if (rotate_stack(a_stack) == -1)
		return (-1);
	ft_printf("ra\n");
	return (0);
}
