/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_three.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: m0rgenstern <m0rgenstern@student.42.fr>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/19 20:13:13 by ekrebs            #+#    #+#             */
/*   Updated: 2024/08/20 07:43:11 by m0rgenstern      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "solver.h"

/**
 * 
 * if => 210
 * else => 201
 */
static void	case_ind_max_0(t_node *stk)
{
	t_node	*n1;
	t_node	*n2;

	n1 = stk->next;
	n2 = stk->next->next;
	if (n1->value > n2->value)
	{
		return ;
	}
	else
	{
		ft_sa(&stk);
		ft_rva(&stk);
	}
	return ;
}

/**
 * 
 * if => 120
 * else => 021
 */
static void	case_ind_max_1(t_node *stk)
{
	t_node	*n0;
	t_node	*n2;

	n0 = stk;
	n2 = stk->next->next;
	if (n0->value > n2->value)
	{
		ft_sa(&stk);
	}
	else
	{
		ft_rva(&stk);
	}
	return ;
}

/**
 * 
 * if => 102
 * else =>012
 */
static void	case_ind_max_2(t_node *stk)
{
	t_node	*n0;
	t_node	*n1;

	n0 = stk;
	n1 = stk->next;
	if (n0->value > n1->value)
	{
		ft_ra(&stk);
	}
	else
	{
		ft_sa(&stk);
		ft_ra(&stk);
	}
	return ;
}

/**
 * brief sorts the three elements of a stack (of exactly 3 elements)
 * 
 */
void	ft_sort_three(t_node *stk)
{
	int	ind_max;

	ind_max = ft_stack_ind_max(stk);
	if (ind_max == 0)
		case_ind_max_0(stk);
	else if (ind_max == 1)
		case_ind_max_1(stk);
	else if (ind_max == 2)
		case_ind_max_2(stk);
	return ;
}
