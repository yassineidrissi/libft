/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstclear.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yidrissi <yassine1337idrissi@gmail.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/27 12:53:28 by yidrissi          #+#    #+#             */
/*   Updated: 2021/12/01 09:13:06 by yidrissi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstclear(t_list **lst, void (*del)(void*))
{
	t_list	*temp;

	if (!lst)
		return ;
	temp = *lst;
	while (temp)
	{
		temp = (*lst)->next;
		ft_lstdelone(*lst, del);
		*lst = temp;
	}
	lst = 0;
}

// {
// 	t_list	*temp;

// 	if (!lst)
// 		return ;
// 	temp = *lst;
// 	while (temp)
// 	{
// 		temp = *lst;
// 		ft_lstdelone(*lst, del);
// 		*lst = temp->next;
// 	}
// 	*lst = 0;
// }