/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   lstmap.c                                           :+:    :+:            */
/*                                                     +:+                    */
/*   By: mde-krui <mde-krui@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2023/10/11 11:19:09 by mde-krui      #+#    #+#                 */
/*   Updated: 2023/11/21 17:27:24 by muijf         ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "../include/libft.h"

t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	t_list	*res;
	t_list	*newlst;

	if (!f || !del)
		return (NULL);
	res = NULL;
	while (lst)
	{
		newlst = ft_lstnew(f(lst->content));
		if (!newlst)
		{
			ft_lstclear(&newlst, del);
			return (NULL);
		}
		ft_lstappend(&res, newlst);
		lst = lst->next;
	}
	return (res);
}
