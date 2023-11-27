/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   simple_big.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akortvel <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/21 12:44:00 by akortvel          #+#    #+#             */
/*   Updated: 2023/10/21 12:49:14 by akortvel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	sort_6(t_list **stack_a, t_list **stack_b)
{
	int	distance;

	distance = get_distance(stack_a, get_min(stack_a, -1));
	if (distance == 1)
		ra(stack_a);
	else if (distance == 2)
		ft_rara(stack_a);
	else if (distance == 3)
		ft_rrarrarra(stack_a);
	else if (distance == 4)
		ft_rrarra(stack_a);
	else if (distance == 5)
		rra(stack_a);
	if (is_sorted(stack_a))
		return ;
	pb(stack_a, stack_b);
	sort_5(stack_a, stack_b);
	pa(stack_a, stack_b);
}

void	sort_7(t_list **stack_a, t_list **stack_b)
{
	int	distance;

	distance = get_distance(stack_a, get_min(stack_a, -1));
	if (distance == 1)
		ra(stack_a);
	else if (distance == 2)
		ft_rara(stack_a);
	else if (distance == 3)
		ft_rarara(stack_a);
	else if (distance == 4)
		ft_rrarrarra(stack_a);
	else if (distance == 5)
		ft_rrarra(stack_a);
	else if (distance == 6)
		rra(stack_a);
	if (is_sorted(stack_a))
		return ;
	pb(stack_a, stack_b);
	sort_6(stack_a, stack_b);
	pa(stack_a, stack_b);
}

void	sort_8(t_list **stack_a, t_list **stack_b)
{
	int	distance;

	distance = get_distance(stack_a, get_min(stack_a, -1));
	if (distance == 1)
		ra(stack_a);
	else if (distance == 2)
		ft_rara(stack_a);
	else if (distance == 3)
		ft_rarara(stack_a);
	else if (distance == 4)
		ft_rrarrarrarra(stack_a);
	else if (distance == 5)
		ft_rrarrarra(stack_a);
	else if (distance == 6)
		ft_rrarra(stack_a);
	else if (distance == 7)
		rra(stack_a);
	if (is_sorted(stack_a))
		return ;
	pb(stack_a, stack_b);
	sort_7(stack_a, stack_b);
	pa(stack_a, stack_b);
}

void	sort_9(t_list **stack_a, t_list **stack_b)
{
	int	distance;

	distance = get_distance(stack_a, get_min(stack_a, -1));
	if (distance == 1)
		ra(stack_a);
	else if (distance == 2)
		ft_rara(stack_a);
	else if (distance == 3)
		ft_rarara(stack_a);
	else if (distance == 4)
		ft_rararara(stack_a);
	else if (distance == 5)
		ft_rrarrarrarra(stack_a);
	else if (distance == 6)
		ft_rrarrarra(stack_a);
	else if (distance == 7)
		ft_rrarra(stack_a);
	else if (distance == 8)
		rra(stack_a);
	if (is_sorted(stack_a))
		return ;
	pb(stack_a, stack_b);
	sort_8(stack_a, stack_b);
	pa(stack_a, stack_b);
}

void	simple_big_sort(t_list **stack_a, t_list **stack_b)
{
	int	size;

	if (is_sorted(stack_a) || ft_lstsize(*stack_a) == 0
		|| ft_lstsize(*stack_a) == 1)
		return ;
	size = ft_lstsize(*stack_a);
	if (size == 6)
		sort_6(stack_a, stack_b);
	else if (size == 7)
		sort_7(stack_a, stack_b);
	else if (size == 8)
		sort_8(stack_a, stack_b);
	else if (size == 9)
		sort_9(stack_a, stack_b);
}
