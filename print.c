/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   print.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akortvel <akortvel@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/24 13:17:33 by akortvel          #+#    #+#             */
/*   Updated: 2023/10/24 13:21:27 by akortvel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	print(t_list *stack)
{
	t_list	*tmp;

	tmp = stack;
	while (tmp != NULL)
	{
		ft_printf("%d\n", tmp->value);
		tmp = tmp->next;
	}
}
