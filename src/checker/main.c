/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   main.c                                             :+:    :+:            */
/*                                                     +:+                    */
/*   By: mde-krui <mde-krui@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2023/12/14 11:41:48 by mde-krui      #+#    #+#                 */
/*   Updated: 2024/03/10 15:34:09 by mde-krui      ########   odam.nl         */
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
		do_instruction(strip_newline(instruction), &state);
		free(instruction);
	}
	print_result(&state);
	free_state(&state);
	return (0);
}
