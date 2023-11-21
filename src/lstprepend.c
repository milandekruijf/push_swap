/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   lstprepend.c                                       :+:    :+:            */
/*                                                     +:+                    */
/*   By: mde-krui <mde-krui@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2023/10/11 11:16:15 by mde-krui      #+#    #+#                 */
/*   Updated: 2023/11/21 17:24:44 by muijf         ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "../include/libft.h"

void	ft_lstprepend(t_list **lst, t_list *new)
{
	if (!lst)
		return ;
	if (*lst)
		new->next = *lst;
	*lst = new;
}
