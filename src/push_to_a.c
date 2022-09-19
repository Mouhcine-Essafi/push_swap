/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_to_a.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: messafi <messafi@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/01 14:37:26 by messafi           #+#    #+#             */
/*   Updated: 2022/08/09 17:21:39 by messafi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

void	push_to_a(t_list **a, t_list **b, t_size s)
{
	int	index;

	while (*b)
	{	
		if (s.s_a)
			index = (*a)->index - 1;
		if ((*b)->index == index && (*b))
		{
			pa(a, b);
			s.s_b--;
			s.s_a++;
		}
		else
			fast_moveb(b, index, s.s_b);
	}
}
