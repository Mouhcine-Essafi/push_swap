/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: messafi <messafi@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/22 17:35:31 by messafi           #+#    #+#             */
/*   Updated: 2022/09/19 13:53:45 by messafi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H
#include "ft_printf/ft_printf.h"
#include "libft/libft.h"	

typedef struct s_size
{
	int	s_a;
	int	s_b;
	int	arg;	
}	t_size;
typedef struct s_list
{
	int				content;
	int				index;
	struct s_list	*next;
}	t_list;

t_list	*ft_lstnew(int content);
void	ft_lstadd_front(t_list **lst, t_list *new);
t_list	*ft_lstlast(t_list *lst);
void	ft_lstadd_back(t_list **lst, t_list *new);
void	ft_lstclear(t_list **lst, void (*del)(int));
//algo//
void	radix_sort(t_list **a, t_list **b, t_size s);
int		check_indexing(t_list *a);
void	fast_movea(t_list **a, int index, int c);
void	fast_moveb(t_list **b, int index, int c);
int		ft_chunks(t_list **a, t_list **b, t_size s, int j);
void	push_to_a(t_list **a, t_list **b, t_size s);
void	sortingalgo(t_list **a, t_list **b, t_size s);
void	sortingalgo2(t_list **a, t_list **b, t_size s);
void	to_stack(t_list **a, char **av, int size);
void	indexing(t_list	**a);
void	simple_sort(t_list **a, t_list **b, t_size s);
int		last_index(t_list **a);
//instructions//
void	ft_swap(t_list **stack);
void	sa(t_list **a);
void	sb(t_list **b);
void	ss(t_list **a, t_list **b);
void	push(t_list **to, t_list **from);
void	pa(t_list **a, t_list **b);
void	pb(t_list **b, t_list **a);
void	rotate(t_list **stack);
void	ra(t_list **a);
void	rb(t_list **b);
void	rr(t_list **a, t_list **b);
void	r_rotate(t_list **stack);
void	rra(t_list **a);
void	rrb(t_list **b);
void	rrr(t_list **a, t_list **b);
//errors//
int		printerr(void);
int		is_error(char **av);
#endif
