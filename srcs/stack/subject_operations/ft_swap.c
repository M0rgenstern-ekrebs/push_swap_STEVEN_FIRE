/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_swap.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ekrebs <ekrebs@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/19 19:39:42 by ekrebs            #+#    #+#             */
/*   Updated: 2024/08/21 13:02:14 by ekrebs           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../push_swap.h"

void	ft_swap(t_node **stk)
{
	t_node	*f;
	t_node	*s;
	t_node	*t;

	if (stk == NULL || (*stk)->next == NULL)
	{
		if (VERBOSE)
			ft_printf("\n\t I might have just done an oopsie.\n");
		return ;
	}
	f = *stk;
	s = f->next;
	t = s->next;
	f->next = t;
	s->next = f;
	*stk = s;
	return ;
}

void	ft_sa(t_node **stack_a)
{
	ft_swap(stack_a);
	if (VERBOSE)
		ft_printf("\t\t\t\t\t (A  ->  SA)\n");
	else
		ft_putstr_fd("sa\n", 1);
}

void	ft_sb(t_node **stack_b)
{
	ft_swap(stack_b);
	if (VERBOSE)
		ft_printf("\t\t\t\t\t (B  ->  SB)\n");
	else
		ft_putstr_fd("sb\n", 1);
}

void	ft_ss(t_node **stack_a, t_node **stack_b)
{
	ft_swap(stack_a);
	ft_swap(stack_b);
	if (VERBOSE)
		ft_printf("\t\t\t\t\t (A,B ->  SS)\n");
	else
		ft_putstr_fd("ss\n", 1);
}
