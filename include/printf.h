/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_printf.h                                      :+:    :+:            */
/*                                                     +:+                    */
/*   By: mde-krui <mde-krui@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2023/10/06 14:37:16 by mde-krui      #+#    #+#                 */
/*   Updated: 2023/10/25 12:33:23 by mde-krui      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include <stdarg.h>
# include <stdbool.h>
# include <stdio.h>

int				ft_printf(const char *format, ...);

typedef struct s_ft_printf_state
{
	int			len;
	int			i;
	int			fd;
	const char	*format;
	va_list		*args;
}				t_ft_printf_state;

void			ft_printf_init_state(t_ft_printf_state *state, va_list *args,
					const char *str, int fd);

char			*ft_printf_parse_i(t_ft_printf_state *state);
char			*ft_printf_parse_d(t_ft_printf_state *state);
char			ft_printf_parse_c(t_ft_printf_state *state);
char			*ft_printf_parse_s(t_ft_printf_state *state);
char			*ft_printf_parse_p(t_ft_printf_state *state);
char			*ft_printf_parse_u(t_ft_printf_state *state);
char			*ft_printf_parse_x(t_ft_printf_state *state, bool upper);

void			ft_printf_print_match(t_ft_printf_state *state, char c);
void			ft_printf_print_all(t_ft_printf_state *state);
void			ft_printf_print_s(t_ft_printf_state *state);
void			ft_printf_print_c(t_ft_printf_state *state);
void			ft_printf_print_i(t_ft_printf_state *state);
void			ft_printf_print_d(t_ft_printf_state *state);
void			ft_printf_print_p(t_ft_printf_state *state);
void			ft_printf_print_u(t_ft_printf_state *state);
void			ft_printf_print_x(t_ft_printf_state *state, bool upper);
void			ft_printf_print_null(t_ft_printf_state *state);
void			ft_printf_print_nil(t_ft_printf_state *state);
void			ft_printf_print_percent(t_ft_printf_state *state);

#endif