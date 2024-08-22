/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: m0rgenstern <m0rgenstern@student.42.fr>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/19 20:23:08 by ekrebs            #+#    #+#             */
/*   Updated: 2024/08/22 02:32:34 by m0rgenstern      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

static void	ft_verbose_check(t_node *stk_a)
{
	if (VERBOSE)
	{
		ft_printf("\n\n\n(end): (is it sorted now ?)\n");
		ft_print_stack(stk_a, "A");
		if (ft_stack_is_sorted_strict_ascending(stk_a) == true)
			ft_printf("\t  => is now sorted (sort_three)\n");
		else
			ft_printf("\t  => SORT_FAILURE\n");
	}
}

static void	ft_push_sort_a_to_b(t_node **stk_a, t_node **stk_b)
{
	int	len_a;

	len_a = ft_stack_length(*stk_a);
	ft_push_the_firsts(stk_a, stk_b, &len_a);
	while (len_a > 3)
	{
		ft_naive_push(stk_a, stk_b);
		len_a--;
	}
	if (VERBOSE)
	{
		ft_printf("\n===============================================\n");
		ft_printf("\n\t\t\tHalftway there Baby !\n");
		ft_printf("\n===============================================\n");
	}
}

static void	ft_push_sort_b_to_a(t_node **stk_a, t_node **stk_b)
{
	int	len_b;

	len_b = ft_stack_length(*stk_b);
	while (len_b > 0)
	{
		ft_naive_counter_push(stk_a, stk_b);
		len_b--;
	}
	if (VERBOSE)
		ft_print_both_stacks(*stk_a, *stk_b);
}

/**
 * 
 * brief: sorts stk_a by ascending values;
 * 
 * 
 	#include <stdio.h>
	ft_printf("\ntype and press enter to continue\n");
	scanf(" adfshdf ");
 * 
 */
void	ft_sort(t_node **stk_a, t_node **stk_b)
{
	ft_push_sort_a_to_b(stk_a, stk_b);
	ft_sort_three(stk_a, "A");
	if (VERBOSE)
		ft_print_both_stacks(*stk_a, *stk_b);
	ft_push_sort_b_to_a(stk_a, stk_b);
	ft_put_min_on_top(stk_a);
	ft_verbose_check(*stk_a);
	return ;
}
