/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_small.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ekrebs <ekrebs@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/21 21:50:33 by m0rgenstern       #+#    #+#             */
/*   Updated: 2024/08/23 11:56:18 by ekrebs           ###   ########.fr       */
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

	if (VERBOSE)
		ft_printf("(%s)\n", __func__);
	n0 = *stk_a;
	n1 = n0->next;
	if (n0->value > n1->value)
		ft_sa(stk_a);
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
	if (VERBOSE)
	{
		ft_print_stack(*stk_a, "A");
		ft_printf("\n-------------------------------------");
		ft_printf("\n\n\n(end): (is it sorted now ?)\n");
		ft_print_stack(*stk_a, "A");
		if (ft_stack_is_sorted_strict_ascending(*stk_a) == true)
			ft_printf("\t  => is now sorted (sort_three)\n");
		else
			ft_printf("\t  => SORT_FAILURE\n");
	}
	return ;
}
