/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   args.c                                             :+:    :+:            */
/*                                                     +:+                    */
/*   By: muijf <muijf@student.codam.nl>               +#+                     */
/*                                                   +#+                      */
/*   Created: 2024/02/23 13:54:38 by muijf         #+#    #+#                 */
/*   Updated: 2024/03/25 15:42:41 by mde-krui      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	extract_args(t_state *state, int argc, char **argv)
{
	state->argc = argc;
	if (state->argc < 2)
		exit_with_error("no arguments");
	if (state->argc == 2)
		state->args = ft_strsplit(argv[1], ' ');
	else
		state->args = ft_strdupv(++argv);
	if (!state->args)
		exit_with_error("malloc failed");
	validate_args(state);
}

void	free_args(t_state *state)
{
	free_strsplit(state->args);
}
