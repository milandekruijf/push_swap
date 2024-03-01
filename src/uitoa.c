/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   uitoa.c                                            :+:    :+:            */
/*                                                     +:+                    */
/*   By: mde-krui <mde-krui@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2023/10/02 17:32:12 by mde-krui      #+#    #+#                 */
/*   Updated: 2024/03/01 11:11:12 by muijf         ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_uitoa(unsigned int n) {
  char *res;
  int len;

  if (n == 0)
    return (ft_strdup("0"));
  len = ft_digitlen(n, 10);
  res = (char *)malloc(sizeof(char) * (len + 1));
  if (!res)
    return (0);
  res[len] = '\0';
  while (n != 0) {
    res[len - 1] = n % 10 + 48;
    n = n / 10;
    len--;
  }
  return (res);
}
