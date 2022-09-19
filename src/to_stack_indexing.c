/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   to_stack_indexing.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: messafi <messafi@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/23 15:38:17 by messafi           #+#    #+#             */
/*   Updated: 2022/08/09 11:34:24 by messafi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

int	last_index(t_list **a)
{
	t_list	*t;

	t = *a;
	while (t->next)
		t = t->next;
	return (t->index);
}

void	to_stack(t_list **a, char **av, int size)
{
	while (size > 0)
	{
		ft_lstadd_front(a, ft_lstnew(atoi(av[size])));
		size--;
	}
}

void	indexing(t_list	**a)
{
	t_list	*t;
	t_list	*t2;
	int		ind;

	ind = 0;
	t = *a;
	while (t)
	{
		t2 = *a;
		while (t2)
		{
			if (t2->content < t->content)
				ind++;
			t2 = t2->next;
		}
		t->index = ind;
		ind = 0;
		t = t->next;
	}
}
