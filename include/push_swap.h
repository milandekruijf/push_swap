/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   push_swap.h                                        :+:    :+:            */
/*                                                     +:+                    */
/*   By: mde-krui <mde-krui@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2023/12/14 11:43:52 by mde-krui      #+#    #+#                 */
/*   Updated: 2024/03/25 12:02:39 by mde-krui      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H

# include "libft.h"
# include "shared.h"

void	exit_with_error(char *msg);

void	free_strsplit(char **str);

void	malloc_state(t_state *state);

void	extract_args(t_state *state, int argc, char **argv);
void	free_args(t_state *state);

t_stack	*get_last_stack(t_stack *stack);
t_stack	*create_stack(int num);
void	append_to_stack(t_stack **stack, t_stack *new_stack);
int		get_stack_size(t_stack *stack);

int		get_stack_max_bits(t_stack **stack);
void	index_stack(t_stack **stack);
int		get_stack_min_index(t_stack **stack, int val);
int		get_stack_distance(t_stack **stack, int index);
t_stack	*get_next_min_stack(t_stack **stack);

void	free_stack(t_stack **stack);

int		pa(t_stack **a_stack, t_stack **b_stack);
int		pb(t_stack **a_stack, t_stack **b_stack);
int		ra(t_stack **a_stack);
int		rb(t_stack **b_stack);
int		rr(t_stack **a_stack, t_stack **b_stack);
int		rra(t_stack **a_stack);
int		rrb(t_stack **a_stack);
int		rrr(t_stack **a_stack, t_stack **b_stack);
int		sa(t_stack **a_stack);
int		sb(t_stack **b_stack);
int		ss(t_stack **a_stack, t_stack **b_stack);

void	radix_sort(t_state *state);
void	simple_sort(t_state *state);
void	sort_stack(t_state *state);

#endif