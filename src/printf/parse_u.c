/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   parse_u.c                                          :+:    :+:            */
/*                                                     +:+                    */
/*   By: mde-krui <mde-krui@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2023/10/25 11:36:45 by mde-krui      #+#    #+#                 */
/*   Updated: 2023/11/21 23:33:39 by muijf         ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "../../include/libft.h"
#include "../../include/printf.h"

char	*ft_printf_parse_u(t_ft_printf_state *state)
{
	char	*res;

	res = ft_uitoa(va_arg(*(state->args), unsigned int));
	if (!res)
		return (NULL);
	state->len += ft_strlen(res);
	return (res);
}
