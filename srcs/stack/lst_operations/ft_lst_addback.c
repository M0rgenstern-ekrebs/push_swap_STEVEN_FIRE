/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lst_addback.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ekrebs <ekrebs@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/19 19:28:06 by ekrebs            #+#    #+#             */
/*   Updated: 2024/08/21 15:07:55 by ekrebs           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../stack.h"

//adds to the back of an existing lst
void	ft_lst_addback(t_node *lst, t_node *new)
{
	t_node	*last;

	if (!new)
		return ;
	if (!lst)
	{
		lst = new;
		return ;
	}
	last = ft_lst_last(lst);
	new->ind = last->ind + 1;
	last->next = new;
}
