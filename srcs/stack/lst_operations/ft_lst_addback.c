/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lst_addback.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: m0rgenstern <m0rgenstern@student.42.fr>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/19 19:28:06 by ekrebs            #+#    #+#             */
/*   Updated: 2024/08/20 07:08:15 by m0rgenstern      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../stack.h"

//adds new to bottom
void	ft_lst_addback(t_node *lst, t_node *new)
{
	t_node	*last;

	if (!lst || !new)
		return ;
	if (lst)
	{
		last = ft_lst_last(lst);
		last->next = new;
	}
	else
		lst = new;
}
