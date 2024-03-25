/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   checker.h                                          :+:    :+:            */
/*                                                     +:+                    */
/*   By: mde-krui <mde-krui@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2023/12/14 11:43:52 by mde-krui      #+#    #+#                 */
/*   Updated: 2024/03/10 13:21:06 by mde-krui      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#ifndef CHECKER_H
# define CHECKER_H

# include "libft.h"
# include "shared.h"

void	do_instruction(char *instruction, t_state *state);

void	print_result(t_state *state);

char	*strip_newline(char *str);

#endif