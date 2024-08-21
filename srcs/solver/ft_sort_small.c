/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_small.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: m0rgenstern <m0rgenstern@student.42.fr>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/21 21:50:33 by m0rgenstern       #+#    #+#             */
/*   Updated: 2024/08/21 22:04:09 by m0rgenstern      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

/**
 * 
 * brief : sorts by ascending values
 * 
 */
static void	ft_sort_two(t_node **stk_a)
{
	t_node	*n0;
	t_node	*n1;

	n0 = *stk_a;
	n1 = n0->next;
	if (n0->value > n1->value)
		*stk_a = n1;
	return ;
}

/**
 * 
 * brief : sorts by ascending values
 * 
 */
void	ft_sort_small(t_node **stk_a, int argc)
{
	if (argc == 2 + 1)
		ft_sort_two(stk_a);
	if (argc == 3 + 1)
		ft_sort_three(stk_a, "A");
	return ;
}
