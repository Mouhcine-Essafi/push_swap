/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   check_indexing.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: messafi <messafi@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/23 14:35:57 by messafi           #+#    #+#             */
/*   Updated: 2022/08/05 12:02:56 by messafi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

int	check_indexing(t_list *a)
{
	t_list	*t;

	if (!a)
		return (0);
	t = a;
	while (t && t->next)
	{
		if (t->index < t->next->index)
			t = t->next;
		else
			return (1);
	}
	return (0);
}
