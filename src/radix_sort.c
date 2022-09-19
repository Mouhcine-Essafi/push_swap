/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   radix_sort.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: messafi <messafi@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/04 14:37:50 by messafi           #+#    #+#             */
/*   Updated: 2022/08/04 15:19:03 by messafi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

void	radix_sort(t_list **a, t_list **b, t_size s)
{
	int	i;
	int	t;
	int	j;

	i = 0;
	j = 0;
	while (check_indexing(*a))
	{
		i = 0;
		while (i < s.arg)
		{
			t = (*a)->index >> j;
			if ((t & 1) == 0)
				pb(b, a);
			else
				ra(a);
			i++;
		}
		while (*b)
			pa(a, b);
		j++;
	}
}
