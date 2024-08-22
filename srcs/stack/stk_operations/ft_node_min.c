/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_stack_get_min.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ekrebs <ekrebs@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/22 00:08:56 by m0rgenstern       #+#    #+#             */
/*   Updated: 2024/08/22 14:36:45 by ekrebs           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../stack.h"

t_node	*ft_node_min(t_node *stk)
{
	t_node	*tmp;
	t_node	*min;
	int		i;

	tmp = stk;
	min = tmp;
	i = 0;
	while (tmp)
	{
		if (tmp->value < min->value)
		{
			min = tmp;
			min->ind = i;
		}
		i++;
		tmp = tmp->next;
	}
	return (min);
}
