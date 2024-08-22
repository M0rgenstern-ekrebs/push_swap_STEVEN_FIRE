/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_stack_get_max.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ekrebs <ekrebs@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/22 00:11:53 by m0rgenstern       #+#    #+#             */
/*   Updated: 2024/08/22 14:36:16 by ekrebs           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../stack.h"

t_node	*ft_node_max(t_node *stk)
{
	t_node	*tmp;
	t_node	*max;
	int		i;

	tmp = stk;
	max = tmp;
	i = 0;
	while (tmp)
	{
		if (tmp->value > max->value)
		{
			max = tmp;
			max->ind = i;
		}
		i++;
		tmp = tmp->next;
	}
	return (max);
}
