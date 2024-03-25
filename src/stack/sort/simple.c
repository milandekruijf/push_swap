/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   simple.c                                           :+:    :+:            */
/*                                                     +:+                    */
/*   By: muijf <muijf@student.codam.nl>               +#+                     */
/*                                                   +#+                      */
/*   Created: 2024/02/21 13:14:54 by muijf         #+#    #+#                 */
/*   Updated: 2024/03/10 13:33:59 by mde-krui      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

static void	sort_3_1(t_state *state)
{
	ra(state->a_stack);
	sa(state->a_stack);
	rra(state->a_stack);
}

static void	sort_3(t_state *state)
{
	t_stack	*head_stack;
	int		min;
	int		next_min;

	if (is_stack_sorted(state->a_stack))
		return ;
	head_stack = *state->a_stack;
	min = get_stack_min_index(state->a_stack, -1);
	next_min = get_stack_min_index(state->a_stack, min);
	if (head_stack->index == min && head_stack->next->index != next_min)
		sort_3_1(state);
	else if (head_stack->index == next_min)
	{
		if (head_stack->next->index == min)
			sa(state->a_stack);
		else
			rra(state->a_stack);
	}
	else if (head_stack->next->index == min)
		ra(state->a_stack);
	else
	{
		sa(state->a_stack);
		rra(state->a_stack);
	}
}

static void	sort_4(t_state *state)
{
	int	distance;

	if (is_stack_sorted(state->a_stack))
		return ;
	distance = get_stack_distance(state->a_stack,
			get_stack_min_index(state->a_stack, -1));
	if (distance == 1)
		ra(state->a_stack);
	else if (distance == 2)
	{
		ra(state->a_stack);
		ra(state->a_stack);
	}
	else if (distance == 3)
		rra(state->a_stack);
	if (is_stack_sorted(state->a_stack))
		return ;
	pb(state->a_stack, state->b_stack);
	sort_3(state);
	pa(state->a_stack, state->b_stack);
}

static void	sort_5(t_state *state)
{
	int	distance;

	distance = get_stack_distance(state->a_stack,
			get_stack_min_index(state->a_stack, -1));
	if (distance == 1)
		ra(state->a_stack);
	else if (distance == 2)
	{
		ra(state->a_stack);
		ra(state->a_stack);
	}
	else if (distance == 3)
	{
		rra(state->a_stack);
		rra(state->a_stack);
	}
	else if (distance == 4)
		rra(state->a_stack);
	if (is_stack_sorted(state->a_stack))
		return ;
	pb(state->a_stack, state->b_stack);
	sort_4(state);
	pa(state->a_stack, state->b_stack);
}

void	simple_sort(t_state *state)
{
	int	size;

	if (is_stack_sorted(state->a_stack) || get_stack_size(*state->a_stack) == 0
		|| get_stack_size(*state->a_stack) == 1)
		return ;
	size = get_stack_size(*state->a_stack);
	if (size == 2)
		sa(state->a_stack);
	else if (size == 3)
		sort_3(state);
	else if (size == 4)
		sort_4(state);
	else if (size == 5)
		sort_5(state);
}
