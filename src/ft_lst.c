/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_back.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: messafi <messafi@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/22 14:51:19 by messafi           #+#    #+#             */
/*   Updated: 2022/08/09 17:20:44 by messafi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

void	ft_lstadd_back(t_list **lst, t_list *new)
{
	if (!*lst)
		*lst = new;
	else
		ft_lstlast(*lst)->next = new;
}

void	ft_lstadd_front(t_list **lst, t_list *new)
{	
	if (lst)
	{
		new->next = *lst;
		*lst = new;
	}
}

void	ft_lstclear(t_list **lst, void (*del)(int))
{
	t_list	*ptr;

	while (*lst != NULL)
	{
		ptr = (*lst)->next;
		del((*lst)->content);
		free(*lst);
		*lst = ptr;
	}
}

t_list	*ft_lstlast(t_list *lst)
{
	if (lst)
	{
		while (lst->next)
			lst = lst->next;
		return (lst);
	}
	return (0);
}

t_list	*ft_lstnew(int content)
{
	t_list	*h;

	h = malloc(sizeof(t_list));
	if (h == NULL)
		return (0);
	h->content = content;
	h->next = NULL;
	return (h);
}
