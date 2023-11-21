/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   itoa.c                                             :+:    :+:            */
/*                                                     +:+                    */
/*   By: mde-krui <mde-krui@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2023/10/02 17:32:12 by mde-krui      #+#    #+#                 */
/*   Updated: 2023/11/21 17:37:54 by muijf         ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "../include/libft.h"

char	*ft_itoa(int n)
{
	char		*res;
	size_t		digitcnt;
	long int	absn;

	if (n == 0)
		return (ft_strdup("0"));
	digitcnt = ft_digitlen(n, 10);
	absn = ft_abs(n);
	if (n < 0)
		digitcnt++;
	res = malloc(sizeof(char) * (digitcnt + 1));
	if (!res)
		return (NULL);
	res[digitcnt] = '\0';
	while (digitcnt--)
	{
		res[digitcnt] = absn % 10 + '0';
		absn /= 10;
	}
	if (n < 0)
		res[0] = '-';
	return (res);
}
