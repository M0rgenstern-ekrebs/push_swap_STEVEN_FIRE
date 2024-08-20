/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_push.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: m0rgenstern <m0rgenstern@student.42.fr>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/19 19:39:25 by ekrebs            #+#    #+#             */
/*   Updated: 2024/08/20 07:12:55 by m0rgenstern      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../push_swap.h"

void	ft_push(t_node **src, t_node **dest)
{
	t_node	*tmp;

	if (*src == NULL)
		return ;
	tmp = (*src)->next;
	(*src)->next = *dest;
	*dest = *src;
	*src = tmp;
}

void	ft_pa(t_node **stack_a, t_node **stack_b)
{
	ft_push(stack_b, stack_a);
	ft_putstr_fd("pa\n", 1);
}

void	ft_pb(t_node **stack_a, t_node **stack_b)
{
	ft_push(stack_a, stack_b);
	ft_putstr_fd("pb\n", 1);
}
