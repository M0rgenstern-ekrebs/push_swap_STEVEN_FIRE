/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rev_rotate.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ekrebs <ekrebs@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/10 10:42:40 by mlapique          #+#    #+#             */
/*   Updated: 2024/08/19 19:36:25 by ekrebs           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	ft_rev_rotate(t_node **stack)
{
	t_node	*tmp;
	t_node	*last;
	t_node	*last_prev;

	last = ft_get_stack_bottom(*stack);
	last_prev = ft_get_stack_before_bottom(*stack);
	tmp = *stack;
	*stack = last;
	(*stack)->next = tmp;
	last_prev->next = NULL;
}

void	ft_rva(t_node **stack_a)
{
	ft_rev_rotate(stack_a);
	ft_putstr_fd("rra\n", 1);
}

void	ft_rvb(t_node **stack_b)
{
	ft_rev_rotate(stack_b);
	ft_putstr_fd("rrb\n", 1);
}

void	ft_rvrv(t_node **stack_a, t_node **stack_b)
{
	ft_rev_rotate(stack_a);
	ft_rev_rotate(stack_b);
	ft_putstr_fd("rrr\n", 1);
}
