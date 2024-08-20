/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rotate.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: m0rgenstern <m0rgenstern@student.42.fr>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/10 10:42:43 by mlapique          #+#    #+#             */
/*   Updated: 2024/08/20 07:14:42 by m0rgenstern      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../push_swap.h"

void	ft_rotate(t_node **stk)
{
	t_node	*tmp;
	t_node	*tail;

	tmp = *stk;
	*stk = (*stk)->next;
	tail = ft_get_stack_last(*stk);
	tmp->next = NULL;
	tail->next = tmp;
}

void	ft_ra(t_node **stk_a)
{
	ft_rotate(stk_a);
	ft_putstr_fd("ra\n", 1);
}

void	ft_rb(t_node **stk_b)
{
	ft_rotate(stk_b);
	ft_putstr_fd("rb\n", 1);
}

void	ft_rr(t_node **stk_a, t_node **stk_b)
{
	ft_rotate(stk_a);
	ft_rotate(stk_b);
	ft_putstr_fd("rr\n", 1);
}
