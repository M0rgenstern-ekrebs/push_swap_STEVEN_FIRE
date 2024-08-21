/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rotate.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: m0rgenstern <m0rgenstern@student.42.fr>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/10 10:42:43 by ekrebs            #+#    #+#             */
/*   Updated: 2024/08/21 21:54:02 by m0rgenstern      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../push_swap.h"

/**
 * rotate <== 
 * Ex : 120 -> 201
 * 
 * */
void	ft_rotate(t_node **stk)
{
	t_node	*tmp;
	t_node	*tail;

	tmp = *stk;
	*stk = (*stk)->next;
	tail = ft_get_stack_last(*stk);
	tmp->next = NULL;
	tail->next = tmp;
}

/**
 * rotate <== 
 * Ex : 120 -> 201
 * 
 * */
void	ft_ra(t_node **stk_a)
{
	ft_rotate(stk_a);
	if (VERBOSE)
		ft_printf("\t\t|\t\t\t(A   <=  RA)\n");
	else
		ft_putstr_fd("ra\n", 1);
}

/**
 * rotate <== 
 * Ex : 120 -> 201
 * 
 * */
void	ft_rb(t_node **stk_b)
{
	ft_rotate(stk_b);
	if (VERBOSE)
		ft_printf("\t\t\t\t\t(B   <=  RB)\t\t\t|\n");
	else
		ft_putstr_fd("rb\n", 1);
}

/**
 * rotate <== 
 * Ex : 120 -> 201
 * 
 * */
void	ft_rr(t_node **stk_a, t_node **stk_b)
{
	ft_rotate(stk_a);
	ft_rotate(stk_b);
	if (VERBOSE)
		ft_printf("\t\t|\t\t\t(A,B  <=  RR)\t\t\t|\n");
	else
		ft_putstr_fd("rr\n", 1);
}
