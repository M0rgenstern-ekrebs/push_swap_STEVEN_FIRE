/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_turk_sort.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ekrebs <ekrebs@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/22 13:47:26 by ekrebs            #+#    #+#             */
/*   Updated: 2024/08/22 18:46:58 by ekrebs           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

void	ft_naive_counter_push(t_node **a, t_node **b)
{
	if (VERBOSE)
	{
		ft_printf("\n-------------------------------------");
		ft_printf("\n(%s)\n", __func__);
	}
	ft_init_nodes_b(*a, *b);
	if (VERBOSE)
	{
		ft_print_both_stacks(*a, *b);
	}
	ft_move_b_to_a(a, b);
}

static void	ft_push_sort_b_to_a(t_node **stk_a, t_node **stk_b)
{
	int	len_b;

	len_b = ft_stack_len(*stk_b);
	while (len_b > 0)
	{
		ft_naive_counter_push(stk_a, stk_b);
		len_b--;
	}
	if (VERBOSE)
		ft_print_both_stacks(*stk_a, *stk_b);
}

void	ft_naive_push(t_node **a, t_node **b)
{
	if (VERBOSE)
	{
		ft_printf("\n-------------------------------------");
		ft_printf("\n(%s)\n", __func__);
	}
	ft_init_nodes_a(*a, *b);
	if (VERBOSE)
	{
		ft_print_both_stacks(*a, *b);
	}
	ft_move_a_to_b(a, b);
}

static void	ft_push_sort_a_to_b(t_node **stk_a, t_node **stk_b)
{
	int	len_a;

	len_a = ft_stack_len(*stk_a);
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

void	ft_turk_sort(t_node **stk_a, t_node **stk_b)
{
	ft_push_sort_a_to_b(stk_a, stk_b);
	ft_sort_three(stk_a, "A");
	if (VERBOSE)
		ft_print_both_stacks(*stk_a, *stk_b);
	ft_push_sort_b_to_a(stk_a, stk_b);
	ft_set_current_index(*stk_a);
	ft_put_min_on_top(stk_a);
	if (VERBOSE)
	{
		ft_printf("\n\n\n(end): (is it sorted now ?)\n");
		ft_print_stack(*stk_a, "A");
		if (ft_stack_is_sorted_strict_ascending(*stk_a) == true)
			ft_printf("\t  => is now sorted (sort_three)\n");
		else
			ft_printf("\t  => SORT_FAILURE\n");
	}
	return ;
}
