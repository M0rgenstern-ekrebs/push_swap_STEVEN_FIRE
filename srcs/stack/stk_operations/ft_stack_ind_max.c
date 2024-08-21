/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_stack_ind_max.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ekrebs <ekrebs@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/19 20:19:31 by ekrebs            #+#    #+#             */
/*   Updated: 2024/08/21 19:56:26 by ekrebs           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../stack.h"

int	ft_stack_ind_max(t_node *stk)
{
	t_node	*tmp;
	int		max;
	int		ind_max;
	int		i;

	tmp = stk;
	i = 0;
	max = tmp->value;
	ind_max = 0;
	while (tmp)
	{
		if (tmp->value > max)
		{
			ind_max = i;
			max = tmp->value;
		}
		tmp = tmp->next;
		i++;
	}
	return (ind_max);
}
