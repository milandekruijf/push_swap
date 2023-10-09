/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_itoa.c                                          :+:    :+:            */
/*                                                     +:+                    */
/*   By: mde-krui <mde-krui@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2023/10/02 17:32:12 by mde-krui      #+#    #+#                 */
/*   Updated: 2023/10/09 15:43:01 by mde-krui      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static size_t	ft_countdgt(int num)
{
	size_t	digitcnt;

	digitcnt = 1;
	while (num / 10)
	{
		num /= 10;
		digitcnt++;
	}
	return (digitcnt);
}

static long int	ft_abs(long int num)
{
	if (num < 0)
		return (-num);
	return (num);
}

char	*ft_itoa(int num)
{
	char		*res;
	size_t		digitcnt;
	long int	absnum;

	digitcnt = ft_countdgt(num);
	absnum = ft_abs(num);
	if (num < 0)
		digitcnt++;
	res = ft_calloc(digitcnt + 1, sizeof(char));
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
