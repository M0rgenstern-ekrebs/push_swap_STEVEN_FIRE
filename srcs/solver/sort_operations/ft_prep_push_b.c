/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_prep_push_b.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ekrebs <ekrebs@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/22 16:26:52 by ekrebs            #+#    #+#             */
/*   Updated: 2024/08/22 18:01:24 by ekrebs           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../push_swap.h"

void	ft_prep_for_push_b(t_node **stack, t_node *top)
{
	while (*stack != top)
	{
		if (top->above_median)
			ft_rb(stack);
		else
			ft_rvb(stack);
	}
}
