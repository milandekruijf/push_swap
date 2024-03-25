/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   args.c                                             :+:    :+:            */
/*                                                     +:+                    */
/*   By: muijf <muijf@student.codam.nl>               +#+                     */
/*                                                   +#+                      */
/*   Created: 2024/02/23 13:54:38 by muijf         #+#    #+#                 */
/*   Updated: 2024/03/10 15:25:57 by mde-krui      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	validate_args(char **args)
{
	int	i;
	int	j;

	i = 0;
	j = 0;
	while (args[i])
	{
		j = 0;
		while (args[j])
		{
			if (i == j)
			{
				j++;
				continue ;
			}
			if (!args[i][0])
				exit_with_error("empty");
			if (!ft_strisnum(args[i]))
				exit_with_error("can only contain numbers");
			if (ft_atoi(args[i]) == ft_atoi(args[j++]))
				exit_with_error("duplicate numbers");
		}
		i++;
	}
}

char	**get_args(int argc, char **argv)
{
	char	**args;

	if (argc < 2)
		return (NULL);
	if (argc == 2)
		args = ft_strsplit(argv[1], ' ');
	else
		args = ft_strdupv(++argv);
	validate_args(args);
	return (args);
}

void	free_args(t_state *state)
{
	free_strsplit(state->args);
}
