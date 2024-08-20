/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_stack_ind_min.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: m0rgenstern <m0rgenstern@student.42.fr>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/19 20:41:20 by ekrebs            #+#    #+#             */
/*   Updated: 2024/08/20 11:16:20 by m0rgenstern      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../stack.h"

int	ft_stack_ind_min(t_node *stk)
{
	t_node	*tmp;
	int		min;
	int		ind_min;
	int		i;

	tmp = stk;
	i = 0;
	min = tmp->value;
	ind_min = 0;
	while (tmp)
	{
		if (tmp->value < min) 
		{
			ind_min = i;
			min = tmp->value;
		}
		tmp = tmp->next;
		i++;
	}
	return (ind_min);
}
