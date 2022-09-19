/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   instruction3.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: messafi <messafi@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/23 14:36:59 by messafi           #+#    #+#             */
/*   Updated: 2022/08/05 12:03:53 by messafi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

void	ra(t_list **a)
{
	rotate(a);
	ft_printf("ra\n");
}

void	rb(t_list **b)
{
	rotate(b);
	ft_printf("rb\n");
}

void	rr(t_list **a, t_list **b)
{
	rotate(a);
	rotate(b);
	ft_printf("rr\n");
}

void	rra(t_list **a)
{
	r_rotate(a);
	ft_printf("rra\n");
}

void	rrb(t_list **b)
{
	r_rotate(b);
	ft_printf("rrb\n");
}
