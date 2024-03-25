/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   parse_x.c                                          :+:    :+:            */
/*                                                     +:+                    */
/*   By: mde-krui <mde-krui@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2023/10/25 11:36:45 by mde-krui      #+#    #+#                 */
/*   Updated: 2023/11/21 23:34:00 by muijf         ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "../../include/libft.h"
#include "../../include/printf.h"

char	*ft_printf_parse_x(t_ft_printf_state *state, bool upper)
{
	char	*res;
	int		num;

	num = va_arg(*(state->args), unsigned int);
	res = ft_uitox(num, 16);
	if (!res)
		return (NULL);
	if (upper)
		res = ft_strupr(res);
	state->len += ft_strlen(res);
	return (res);
}
