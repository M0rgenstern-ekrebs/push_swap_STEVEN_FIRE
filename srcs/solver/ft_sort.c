/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: m0rgenstern <m0rgenstern@student.42.fr>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/19 20:23:08 by ekrebs            #+#    #+#             */
/*   Updated: 2024/08/20 22:58:59 by m0rgenstern      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

static void	ft_verbose_check(t_node *stk_a)
{
	if (VERBOSE)
	{
		ft_printf("\n\n\n(end): (is it sorted now ?)\n");
		ft_print_stack(stk_a, "A");
		if(ft_stack_is_sorted_strict_ascending(stk_a) == true)
			ft_printf("\t  => is now sorted (sort_three)\n");
		else
			ft_printf("\t  => SORT_FAILURE\n");
	}
}

static void	ft_naive_push(t_node **stk_a, t_node **stk_b)
{
	int	ind_cheapest;

	if (VERBOSE)
		ft_printf("\n(%s):\n\n", __func__);
	ft_stack_set_target_nodes(*stk_a, *stk_b);
	ind_cheapest = ft_ind_cheapest(*stk_a, *stk_b);
	(void) ind_cheapest;
}

static void	ft_naive_counter_push(t_node **stk_a, t_node **stk_b)
{
	int	ind_cheapest;

	if (VERBOSE)
		ft_printf("\n(%s):\n\n", __func__);
	ft_stack_set_target_nodes(*stk_b, *stk_a);
	ind_cheapest = ft_ind_cheapest(*stk_a, *stk_b);
	(void) ind_cheapest;
}
/**
 * 
 * brief : pushes the X firsts of a in b
 * X >= 3, we try 3 times & we stop pushing if there is only 3 left in a
 */
static void	ft_push_the_three_firsts(t_node **stk_a, t_node **stk_b, int len_a)
{
	int i;

	if (VERBOSE)
		ft_printf("\n(%s):\n\n", __func__);
	i = 0;
	while(i < 3)
	{
		if(len_a <= 3)
		{
			if (VERBOSE)
				ft_print_both_stacks(*stk_a, *stk_b);
			return ;
		}
		ft_pb(stk_a, stk_b);
		len_a--;
		i++;
	}
	if (VERBOSE)
		ft_print_both_stacks(*stk_a, *stk_b);
}

void	ft_sort(t_node **stk_a, t_node **stk_b)
{
	int	len_a;
	int	len_b;
	
	len_a = ft_stack_length(*stk_a);
	ft_push_the_three_firsts(stk_a, stk_b, len_a);
	while (len_a > 3)
	{
		ft_naive_push(stk_a, stk_b);
		len_a--;
	}
	if (len_a == 3)
		ft_sort_sort_three(stk_a);
	len_b = ft_stack_length(*stk_b);
	while (len_b > 0)
	{
		ft_naive_counter_push(stk_b, stk_a);
		len_b--;
	}
	ft_verbose_check(*stk_a);
	return ;
}
