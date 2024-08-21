/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_push.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ekrebs <ekrebs@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/19 19:39:25 by ekrebs            #+#    #+#             */
/*   Updated: 2024/08/21 13:00:07 by ekrebs           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../push_swap.h"

void	ft_push(t_node **src, t_node **dest)
{
	t_node	*fa;
	t_node	*fb;

	fa = *src;
	fb = *dest;
	if (*src == NULL)
	{
		if (VERBOSE)
			ft_printf("\n\t I might have just done an oopsie.\n");
		return ;
	}
	(*src) = fa->next;
	(*dest) = fa;
	fa->next = fb;

	// tmp = (*src)->next;
	// (*src)->next = *dest;
	// *dest = *src;
	// *src = tmp;
}

void	ft_pa(t_node **stack_a, t_node **stack_b)
{
	ft_push(stack_b, stack_a);
	if (VERBOSE)
		ft_printf("\t\t\t\t\t (B  ->  PA)\n");
	else
		ft_putstr_fd("pa\n", 1);
}

void	ft_pb(t_node **stack_a, t_node **stack_b)
{
	ft_push(stack_a, stack_b);
	if (VERBOSE)
		ft_printf("\t\t\t\t\t (A  ->  PB)\n");
	else
		ft_putstr_fd("pb\n", 1);
}
