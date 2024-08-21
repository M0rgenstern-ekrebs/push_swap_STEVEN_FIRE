/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ekrebs <ekrebs@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/19 20:23:08 by ekrebs            #+#    #+#             */
/*   Updated: 2024/08/21 19:42:33 by ekrebs           ###   ########.fr       */
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

/**
 * 
 * brief : pushes the X firsts of a in b
 * X >= 3, we try 3 times & we stop pushing if there is only 3 left in a
 */
static void	ft_push_the_two_firsts(t_node **stk_a, t_node **stk_b, int *len_a)
{
	int	i;

	if (VERBOSE)
		ft_printf("\n(%s):\n", __func__);
	i = 0;
	while (i < 2)
	{
		if (*len_a <= 3)
		{
			if (VERBOSE)
				ft_print_both_stacks(*stk_a, *stk_b);
			return ;
		}
		ft_pb(stk_a, stk_b);
		(*len_a)--;
		i++;
	}
	if (VERBOSE)
		ft_print_both_stacks(*stk_a, *stk_b);
}

/**
 * 
 * target node is closest smaller
 * 
 */
void	ft_sort(t_node **stk_a, t_node **stk_b)
{
	int	len_a;
	int	len_b;

	len_a = ft_stack_length(*stk_a);
	ft_push_the_two_firsts(stk_a, stk_b, &len_a);
	while (len_a > 3)
	{
		ft_naive_push(stk_a, stk_b);
		len_a--;
	}
	ft_sort_three(stk_a, "A");
	if (VERBOSE)
		ft_print_both_stacks(*stk_a, *stk_b);
	len_b = ft_stack_length(*stk_b);
	while (len_b > 0)
	{
		ft_naive_counter_push(stk_b, stk_a);
		len_b--;
		if (VERBOSE && len_b < 5)
			exit(42);
	}
	if (VERBOSE)
		ft_print_both_stacks(*stk_a, *stk_b);
	ft_verbose_check(*stk_a);
	return ;
}
