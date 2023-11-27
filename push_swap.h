/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akortvel <akortvel@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/21 12:37:43 by akortvel          #+#    #+#             */
/*   Updated: 2023/10/24 13:22:40 by akortvel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H

# include "ft_printf/libft/libft.h"
# include "ft_printf/ft_printf.h"

// Stack
typedef struct s_list
{
	int				value;
	int				index;
	struct s_list	*next;
}				t_list;

// Util functions
t_list	*ft_lstnew(int value);
t_list	*ft_lstlast(t_list *head);
void	ft_lstadd_front(t_list **stack, t_list *newx);
void	ft_lstadd_back(t_list **stack, t_list *newx);
int		ft_lstsize(t_list *head);

void	ft_error(void);
void	ft_check_args(int argc, char **argv);
int		is_sorted(t_list **stack);
int		get_distance(t_list **stack, int index);
void	free_stack(t_list **stack);
void	ft_free(char **str);

// Algorithm utils
void	radix_sort(t_list **stack_a, t_list **stack_b);
void	simple_sort(t_list **stack_a, t_list **stack_b);
void	simple_big_sort(t_list **stack_a, t_list **stack_b);
int		get_min(t_list **stack, int val);
void	index_stack(t_list **stack);

// Instruction functions
int		swap(t_list **stack);
int		push(t_list **stack_to, t_list **stack_from);
int		rotate(t_list **stack);
int		rev_rotate(t_list **stack);

int		sa(t_list **stack_a);
int		pa(t_list **stack_a, t_list **stack_b);
int		pb(t_list **stack_b, t_list **stack_a);
int		ra(t_list **stack_a);
int		rra(t_list **stack_a);

/*fast_sort*/
void	sort_3(t_list **stack_a);
void	sort_4(t_list **stack_a, t_list **stack_b);
void	sort_5(t_list **stack_a, t_list **stack_b);
void	sort_6(t_list **stack_a, t_list **stack_b);
void	sort_7(t_list **stack_a, t_list **stack_b);
void	sort_8(t_list **stack_a, t_list **stack_b);
void	sort_9(t_list **stack_a, t_list **stack_b);

/*Combos*/
void	ft_rasarra(t_list **stack_a);
void	ft_sarra(t_list **stack_a);
void	ft_rrarrarra(t_list **stack_a);
void	ft_rrarrarrarra(t_list **stack_a);
void	ft_rarara(t_list **stack_a);
void	ft_rara(t_list **stack_a);
void	ft_rrarra(t_list **stack_a);
void	ft_rararara(t_list **stack_a);

/*print*/
void	print(t_list *stack);

#endif
