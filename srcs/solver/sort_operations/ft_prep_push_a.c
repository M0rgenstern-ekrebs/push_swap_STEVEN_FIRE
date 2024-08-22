/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_prep_push_a.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ekrebs <ekrebs@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/22 16:26:41 by ekrebs            #+#    #+#             */
/*   Updated: 2024/08/22 18:41:23 by ekrebs           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../push_swap.h"

void	ft_prep_for_push_a(t_node **stack, t_node *top)
{
	while (*stack != top)
	{
		if (top->above_median)
			ft_ra(stack);
		else
			ft_rva(stack);
	}
}
