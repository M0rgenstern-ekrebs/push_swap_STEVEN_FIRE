/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_both_stacks.c                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ekrebs <ekrebs@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/20 18:13:08 by ekrebs            #+#    #+#             */
/*   Updated: 2024/08/20 20:24:19 by ekrebs           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

static void ft_print_lens(t_node *stk_a, t_node *stk_b)
{
	ft_printf("\n\t  len A : %d", ft_stack_length(stk_a));
	if(ft_stack_length(stk_a) == 0)
		ft_printf("\tA is  n u l l");
	ft_printf("\n\t  len B : %d", ft_stack_length(stk_b));
	if(ft_stack_length(stk_b) == 0)
		ft_printf("\t\t\t\t\t     B  is  n u l l\n");
	ft_printf("\n");
}

static void	ft_print_headers(const char *print_name)
{
	ft_printf("\n\t(%s):\n\n", print_name);
	ft_printf("\t    ───────── A ────────── \t\t\t ───────── B ──────────\n");
	ft_printf("\t   │   i   │   value      │\t\t\t│   i   │   value      │\n");
	ft_printf("\t   │───────│──────────────│\t\t\t│───────│──────────────│\n");
}

void	ft_print_both_stacks(t_node *stk_a, t_node *stk_b)
{
	ft_print_headers( __func__);
	ft_print_body(stk_a, stk_b);
	ft_print_lens(stk_a, stk_b);
}
