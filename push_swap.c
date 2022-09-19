/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: messafi <messafi@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/21 17:34:47 by messafi           #+#    #+#             */
/*   Updated: 2022/09/19 15:42:19 by messafi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	if_error(char **av, int ac)
{
	if (ac < 2)
		return (0);
	if (!is_error(av))
		return (1);
	return (0);
}

int	main(int ac, char **av)
{
	t_list	*a;
	t_list	*b;
	t_size	s;

	s.arg = ac - 1;
	s.s_a = ac - 1;
	s.s_b = 0;
	if (if_error(av, ac))
		return (printerr());
	to_stack(&a, av, ac - 1);
	indexing(&a);
	if (!check_indexing(a))
		return (0);
	if (s.arg <= 10)
		simple_sort(&a, &b, s);
	else if (s.arg <= 60)
		sortingalgo2(&a, &b, s);
	else if (s.arg <= 100)
		sortingalgo(&a, &b, s);
	else
		radix_sort(&a, &b, s);
	return (0);
}
