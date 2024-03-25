/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   parse_s.c                                          :+:    :+:            */
/*                                                     +:+                    */
/*   By: mde-krui <mde-krui@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2023/10/25 11:36:45 by mde-krui      #+#    #+#                 */
/*   Updated: 2023/11/21 23:33:33 by muijf         ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "../../include/libft.h"
#include "../../include/printf.h"

char	*ft_printf_parse_s(t_ft_printf_state *state)
{
	char	*res;

	res = va_arg(*(state->args), char *);
	if (!res)
		return (NULL);
	state->len += ft_strlen(res);
	return (res);
}
