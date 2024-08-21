/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_get_node_i.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ekrebs <ekrebs@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/21 14:27:14 by ekrebs            #+#    #+#             */
/*   Updated: 2024/08/21 19:57:47 by ekrebs           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../stack.h"

/**
 * 
 * returns address of the i th node;
 * returns first if failure
 * 
 */
t_node	*ft_get_node_i(t_node *stk, int ind)
{
	t_node	*tmp;
	int		i;

	tmp = stk;
	i = 0;
	while (tmp && i <= ind)
	{
		if (i == ind)
			return (tmp);
		i++;
		tmp = tmp->next;
	}
	if (VERBOSE)
		ft_printf(" (%s) : I did an oopsie", __func__);
	return (stk);
}
