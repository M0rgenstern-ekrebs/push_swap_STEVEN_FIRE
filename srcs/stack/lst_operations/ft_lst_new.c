/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lst_new.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ekrebs <ekrebs@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/20 07:40:30 by m0rgenstern       #+#    #+#             */
/*   Updated: 2024/08/21 15:07:55 by ekrebs           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../stack.h"

//creates an element for a lst (to be head or to add to back)
t_node	*ft_lst_new(int nb)
{
	t_node	*new;

	new = malloc(sizeof(t_node));
	if (!new)
		return (NULL);
	new->value = nb;
	new->ind = 0;
	new->push_cost = -1;
	new->ind_target = -1;
	new->next = NULL;
	return (new);
}
