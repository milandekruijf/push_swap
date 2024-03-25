/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   args.c                                             :+:    :+:            */
/*                                                     +:+                    */
/*   By: muijf <muijf@student.codam.nl>               +#+                     */
/*                                                   +#+                      */
/*   Created: 2024/02/23 13:54:38 by muijf         #+#    #+#                 */
/*   Updated: 2024/03/25 12:20:31 by mde-krui      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	validate_arg(t_state *state, int i)
{
	int	j;

	j = 0;
	while (state->args[j])
	{
		if (!state->args[i][0])
		{
			free_state(state);
			exit_with_error("empty");
		}
		if (!ft_strisnum(state->args[i]))
		{
			free_state(state);
			exit_with_error("can only contain numbers");
		}
		if (i != j && ft_atoi(state->args[i]) == ft_atoi(state->args[j]))
		{
			free_state(state);
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
		validate_arg(state, i++);
}

void	extract_args(t_state *state, int argc, char **argv)
{
	state->argc = argc;
	if (state->argc < 2)
		exit_with_error("no arguments");
	if (state->argc == 2)
	{
		state->args = ft_strsplit(argv[1], ' ');
		if (!state->args)
			exit_with_error("malloc failed");
	}
	else
	{
		state->args = ft_strdupv(++argv);
		if (!state->args)
			exit_with_error("malloc failed");
	}
	if (!state->args)
		exit_with_error("malloc failed");
	validate_args(state);
}

void	free_args(t_state *state)
{
	free_strsplit(state->args);
}
