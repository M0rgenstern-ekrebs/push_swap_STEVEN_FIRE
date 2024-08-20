/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lst_addback.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: m0rgenstern <m0rgenstern@student.42.fr>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/19 19:28:06 by ekrebs            #+#    #+#             */
/*   Updated: 2024/08/20 09:28:55 by m0rgenstern      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../stack.h"

//adds to the back of an existing lst
void	ft_lst_addback(t_node *lst, t_node *new)
{
	t_node	*last;

	if (!lst || !new)
		return ;
	last = ft_lst_last(lst);
	new->index = last->index + 1; 
	last->next = new;

}
