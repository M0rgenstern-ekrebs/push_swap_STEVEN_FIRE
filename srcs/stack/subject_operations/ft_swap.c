/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_swap.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ekrebs <ekrebs@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/19 19:39:42 by ekrebs            #+#    #+#             */
/*   Updated: 2024/08/19 19:40:51 by ekrebs           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include "push_swap.h"

void	ft_swap(t_node **stk)
{
	int	tmp;

	if (stk == NULL || (*stk)->next == NULL)
		return ;
	tmp = (*stk)->index;
	(*stk)->index = (*stk)->next->index;
	(*stk)->next->index = tmp;
	return ;
}

void	ft_sa(t_node **stack_a)
{
	ft_swap(stack_a);
	ft_putstr_fd("sa\n", 1);
}

void	ft_sb(t_node **stack_b)
{
	ft_swap(stack_b);
	ft_putstr_fd("sb\n", 1);
}

void	ft_ss(t_node **stack_a, t_node **stack_b)
{
	ft_swap(stack_a);
	ft_swap(stack_b);
	ft_putstr_fd("ss\n", 1);
}
