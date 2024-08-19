/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lst_addback.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ekrebs <ekrebs@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/19 19:28:06 by ekrebs            #+#    #+#             */
/*   Updated: 2024/08/19 19:29:44 by ekrebs           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../stack.h"

//adds new to bottom
void	ft_lst_add_back(t_node *lst, t_node *new)
{
	t_node	*last;

	if (!lst || !new)
		return ;
	if (lst)
	{
		last = ft_lstlas(lst);
		last->next = new;
	}
	else
		lst = new;
}
