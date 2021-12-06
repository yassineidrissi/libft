/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yidrissi <yassine1337idrissi@gmail.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/27 21:31:04 by yidrissi          #+#    #+#             */
/*   Updated: 2021/12/01 11:25:44 by yidrissi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	t_list	*result;
	t_list	*temp;

	result = NULL;
	if (!lst)
		return (NULL);
	while (lst)
	{
		temp = ft_lstnew(f(lst->content));
		if (!temp)
		{
			ft_lstclear(&result, del);
			return (NULL);
		}
		else
		{
			ft_lstadd_back(&result, temp);
		}
		lst = lst->next;
	}
	return (result);
}

// if (!lst || !del)
// 		return (NULL);
// {
// 	t_list	*result;

// 	result = (t_list *)malloc(ft_lstsize(lst) * sizeof(t_list));
// 	if (!result)
// 		return (NULL);
// 	while (lst)
// 	{
// 		if (!(lst->content))
// 		{
// 			result = f(lst->content);
// 			lst = lst->next;
// 			result = result->next;
// 		}
// 		else
// 		{
// 			del(lst->content);
// 			result = f(lst->content);
// 			lst = lst->next;
// 			result = result->next;
// 		}
// 	}
// 	return (result);
// }
