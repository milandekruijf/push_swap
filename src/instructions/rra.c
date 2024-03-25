/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   rra.c                                              :+:    :+:            */
/*                                                     +:+                    */
/*   By: muijf <muijf@student.codam.nl>               +#+                     */
/*                                                   +#+                      */
/*   Created: 2024/02/21 13:03:41 by muijf         #+#    #+#                 */
/*   Updated: 2024/03/10 12:47:57 by mde-krui      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	rra(t_stack **a_stack)
{
	if (reverse_rotate_stack(a_stack) == -1)
		return (-1);
	ft_printf("rra\n");
	return (0);
}
