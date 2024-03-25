/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   shared.h                                           :+:    :+:            */
/*                                                     +:+                    */
/*   By: mde-krui <mde-krui@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2023/12/14 11:43:52 by mde-krui      #+#    #+#                 */
/*   Updated: 2024/03/25 13:53:51 by mde-krui      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#ifndef SHARED_H
# define SHARED_H

# include "libft.h"
# include "limits.h"

typedef struct s_stack
{
	int				val;
	int				index;
	struct s_stack	*next;
}					t_stack;

typedef struct s_state
{
	int				argc;
	char			**args;
	t_stack			**a_stack;
	t_stack			**b_stack;
}					t_state;

t_state				init_state(int argc, char **argv);
void				free_state(t_state *state);

int					push_stack(t_stack **to_stack, t_stack **from_stack);
int					swap_stack(t_stack **stack);
int					rotate_stack(t_stack **stack);
int					reverse_rotate_stack(t_stack **stack);

int					is_stack_sorted(t_stack **stack);

#endif