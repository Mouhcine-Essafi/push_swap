/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_chunks.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: messafi <messafi@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/04 14:36:24 by messafi           #+#    #+#             */
/*   Updated: 2022/09/19 14:00:00 by messafi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

int	ft_checkr(t_list *a, t_size s, int j)
{
	t_list	*t;

	if (!a)
		return (-1);
	t = a;
	while (t)
	{
		if (t->index < j && t->index != s.arg - 1)
			return (t->index);
		t = t->next;
	}
	return (-1);
}

int	ft_chunks(t_list **a, t_list **b, t_size s, int j)
{
	int	i;

	i = ft_checkr(*a, s, j);
	fast_movea(a, i, s.s_a);
	if (i != s.arg - 1)
		pb(b, a);
	return (0);
}
