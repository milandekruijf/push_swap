/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   main.c                                             :+:    :+:            */
/*                                                     +:+                    */
/*   By: mde-krui <mde-krui@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2023/12/14 11:41:48 by mde-krui      #+#    #+#                 */
/*   Updated: 2024/03/25 14:13:23 by mde-krui      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "checker.h"

int	main(int argc, char **argv)
{
	t_state	state;
	char	*instruction;

	state = init_state(argc, argv);
	while (true)
	{
		instruction = ft_getline(STDIN_FILENO);
		if (!instruction)
			break ;
		strip_newline(instruction);
		if (do_instruction(instruction, &state) == -1)
		{
			free(instruction);
			free_state(&state);
			exit_with_error("invalid instruction");
			break ;
		}
		free(instruction);
	}
	print_result(&state);
	free_state(&state);
	return (EXIT_SUCCESS);
}
