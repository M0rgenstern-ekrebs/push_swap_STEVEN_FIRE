/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_three.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ekrebs <ekrebs@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/19 20:13:13 by ekrebs            #+#    #+#             */
/*   Updated: 2024/08/21 19:01:02 by ekrebs           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

/**
 * 
 * if => 210
 * else => 201
 */
static void	case_ind_max_0(t_node **stk)
{
	t_node	*n1;
	t_node	*n2;

	n1 = (*stk)->next;
	n2 = (*stk)->next->next;
	if (n1->value > n2->value)
	{
		ft_ra(stk);
		ft_sa(stk);
	}
	else
	{
		ft_ra(stk);
	}
	return ;
}

/**
 * 
 * if => 120
 * else => 021
 */
static void	case_ind_max_1(t_node **stk)
{
	t_node	*n0;
	t_node	*n2;

	n0 = *stk;
	n2 = (*stk)->next->next;
	if (n0->value > n2->value)
	{
		ft_rva(stk);
	}
	else
	{
		ft_sa(stk);
		ft_ra(stk);
	}
	return ;
}

/**
 * 
 * if => 102
 * else =>012
 */
static void	case_ind_max_2(t_node **stk)
{
	t_node	*n0;
	t_node	*n1;

	n0 = *stk;
	n1 = (*stk)->next;
	if (n0->value > n1->value)
	{
		ft_sa(stk);
	}
	else
	{
		return ;
	}
	return ;
}

/**
 * brief sorts the three elements of a stack (of exactly 3 elements)
 * 
 */
void	ft_sort_three(t_node **stk, char *name)
{
	int	ind_max;

	if (VERBOSE)
		ft_printf("\n(%s)(%s):\n", __func__, name);
	ind_max = ft_stack_ind_max(*stk);
	if (ind_max == 0)
		case_ind_max_0(stk);
	else if (ind_max == 1)
		case_ind_max_1(stk);
	else if (ind_max == 2)
		case_ind_max_2(stk);
	return ;
}
