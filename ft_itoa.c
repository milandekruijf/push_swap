/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_itoa.c                                          :+:    :+:            */
/*                                                     +:+                    */
/*   By: mde-krui <mde-krui@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2023/10/02 17:32:12 by mde-krui      #+#    #+#                 */
/*   Updated: 2023/11/20 11:20:32 by mde-krui      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_itoa(int num)
{
	char		*res;
	size_t		digitcnt;
	long int	absnum;

	if (num == 0)
		return (ft_strdup("0"));
	digitcnt = ft_count_int_digits(num);
	absnum = ft_abs(num);
	if (num < 0)
		digitcnt++;
	res = malloc(sizeof(char) * (digitcnt + 1));
	if (!res)
		return (NULL);
	res[digitcnt] = '\0';
	while (digitcnt--)
	{
		res[digitcnt] = absnum % 10 + '0';
		absnum /= 10;
	}
	if (num < 0)
		res[0] = '-';
	return (res);
}
