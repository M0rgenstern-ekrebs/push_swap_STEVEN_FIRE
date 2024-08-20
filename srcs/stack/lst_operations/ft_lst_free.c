/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lst_free.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: m0rgenstern <m0rgenstern@student.42.fr>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/20 07:39:48 by m0rgenstern       #+#    #+#             */
/*   Updated: 2024/08/20 07:39:57 by m0rgenstern      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../stack.h"

//stk is hed node
void	ft_lst_free(t_node *stk)
{
	t_node	*tmp;

	while (stk)
	{
		tmp = stk->next;
		free(stk);
		stk = tmp;
	}
	stk = NULL;
}
