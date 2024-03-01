/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   wrdlen.c                                           :+:    :+:            */
/*                                                     +:+                    */
/*   By: muijf <muijf@student.codam.nl>               +#+                     */
/*                                                   +#+                      */
/*   Created: 2023/11/21 17:47:39 by muijf         #+#    #+#                 */
/*   Updated: 2024/03/01 11:11:12 by muijf         ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_wrdlen(char const *s, char c) {
  size_t wrdlen;

  if (!*s)
    return (0);
  wrdlen = 0;
  while (*s) {
    while (*s == c)
      s++;
    if (*s)
      wrdlen++;
    while (*s != c && *s)
      s++;
  }
  return (wrdlen);
}
