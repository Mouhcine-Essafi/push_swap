/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   is_error.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: messafi <messafi@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/04 14:37:16 by messafi           #+#    #+#             */
/*   Updated: 2022/09/19 14:04:48 by messafi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

int	printerr(void)
{
	ft_printf("Error\n");
	return (1);
}

int	if_not_digit(char *av)
{
	int	i;

	i = 0;
	if ((av[i] == '-' || av[i] == '+') && av[i + 1] != '\0')
		i++;
	while (av[i])
	{
		if (!ft_isdigit(av[i]))
			return (1);
		i++;
	}
	return (0);
}

int	if_duplicate(char **av, char *a)
{
	int	i;

	i = 0;
	while (av[i])
	{
		if (ft_atoi(av[i]) == ft_atoi(a))
			return (1);
		i++;
	}
	return (0);
}

int	is_error(char **av)
{
	int	i;

	i = 1;
	while (av[i])
	{
		if (if_not_digit(av[i]))
			return (0);
		else if (if_duplicate(&av[i + 1], av[i]))
			return (0);
		else if (ft_atoi(av[i]) > 2147483647 || ft_atoi(av[i]) < -2147483648)
			return (0);
		i++;
	}
	return (1);
}
