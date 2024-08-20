/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_rotate.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: m0rgenstern <m0rgenstern@student.42.fr>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/10 10:42:40 by mlapique          #+#    #+#             */
/*   Updated: 2024/08/20 07:17:20 by m0rgenstern      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../push_swap.h"

void	ft_rev_rotate(t_node **stack)
{
	t_node	*tmp;
	t_node	*last;
	t_node	*last_prev;

	last = ft_get_stack_last(*stack);
	last_prev = ft_get_stack_last_prev(*stack);
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
