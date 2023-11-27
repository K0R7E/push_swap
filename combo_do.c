/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   combo_do.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akortvel <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/24 13:13:33 by akortvel          #+#    #+#             */
/*   Updated: 2023/10/24 13:16:19 by akortvel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	ft_rasarra(t_list **stack_a)
{
	ra(stack_a);
	sa(stack_a);
	rra(stack_a);
}

void	ft_sarra(t_list **stack_a)
{
	sa(stack_a);
	rra(stack_a);
}

void	ft_rrarrarra(t_list **stack_a)
{
	rra(stack_a);
	rra(stack_a);
	rra(stack_a);
}

void	ft_rrarrarrarra(t_list **stack_a)
{
	rra(stack_a);
	rra(stack_a);
	rra(stack_a);
	rra(stack_a);
}

void	ft_rarara(t_list **stack_a)
{
	ra(stack_a);
	ra(stack_a);
	ra(stack_a);
}
