/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   parse_p.c                                          :+:    :+:            */
/*                                                     +:+                    */
/*   By: mde-krui <mde-krui@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2023/10/25 11:38:17 by mde-krui      #+#    #+#                 */
/*   Updated: 2023/11/21 23:33:28 by muijf         ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "../../include/libft.h"
#include "../../include/printf.h"

char	*ft_printf_parse_p(t_ft_printf_state *state)
{
	char	*res;
	void	*ptr;

	ptr = va_arg(*(state->args), void *);
	if (!ptr)
		return (NULL);
	res = ft_ptox(ptr);
	if (!res)
		return (NULL);
	state->len += ft_strlen(res);
	return (res);
}
