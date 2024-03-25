/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   validation.c                                       :+:    :+:            */
/*                                                     +:+                    */
/*   By: mde-krui <mde-krui@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2024/03/25 15:42:44 by mde-krui      #+#    #+#                 */
/*   Updated: 2024/03/25 15:52:29 by mde-krui      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	validate_arg_numeric(t_state *state, int i)
{
	if (!ft_strisnum(state->args[i]))
	{
		free_args(state);
		exit_with_error("can only contain numbers");
	}
}

void	validate_arg_overflow(t_state *state, int i)
{
	if (ft_atol(state->args[i]) > INT_MAX || ft_atol(state->args[i]) < INT_MIN)
	{
		free_args(state);
		exit_with_error("overflow");
	}
}

void	validate_arg_duplicate_num(t_state *state, int i)
{
	int	j;

	j = 0;
	while (state->args[j])
	{
		if (i != j && ft_atoi(state->args[i]) == ft_atoi(state->args[j]))
		{
			free_args(state);
			exit_with_error("duplicate numbers");
		}
		j++;
	}
}

void	validate_args(t_state *state)
{
	int	i;

	i = 0;
	while (state->args[i])
	{
		validate_arg_overflow(state, i);
		validate_arg_numeric(state, i);
		validate_arg_duplicate_num(state, i);
		i++;
	}
	if (i == 0)
	{
		free_args(state);
		exit_with_error("no arguments");
	}
}
