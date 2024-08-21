/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_rotate.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: m0rgenstern <m0rgenstern@student.42.fr>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/10 10:42:40 by ekrebs            #+#    #+#             */
/*   Updated: 2024/08/21 21:54:02 by m0rgenstern      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../push_swap.h"

/**
 * rotate ==> 
 * Ex : 120 -> 012
 * 
 **/
void	ft_rev_rotate(t_node **stk)
{
	t_node	*tmp;
	t_node	*last;
	t_node	*last_prev;

	last = ft_get_stack_last(*stk);
	last_prev = ft_get_stack_last_prev(*stk);
	tmp = *stk;
	*stk = last;
	(*stk)->next = tmp;
	last_prev->next = NULL;
}

/**
 * rotate ==> 
 * Ex : 120 -> 012
 * 
 **/
void	ft_rva(t_node **stk_a)
{
	ft_rev_rotate(stk_a);
	if (VERBOSE)
		ft_printf("\t\t|\t\t\t(A   =>  RRA)\n");
	else
		ft_putstr_fd("rra\n", 1);
}

/**
 * rotate ==> 
 * Ex : 120 -> 012
 * 
 **/
void	ft_rvb(t_node **stk_b)
{
	ft_rev_rotate(stk_b);
	if (VERBOSE)
		ft_printf("\t\t\t\t\t(B   =>  RRB)\t\t\t|\n");
	else
		ft_putstr_fd("rrb\n", 1);
}

/**
 * rotate ==> 
 * Ex : 120 -> 012
 * 
 **/
void	ft_rvrv(t_node **stk_a, t_node **stk_b)
{
	ft_rev_rotate(stk_a);
	ft_rev_rotate(stk_b);
	if (VERBOSE)
		ft_printf("\t\t|\t\t\t(A,B  =>  RRR)\t\t\t|\n");
	else
		ft_putstr_fd("rrr\n", 1);
}
