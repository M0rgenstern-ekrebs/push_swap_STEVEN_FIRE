	/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   free.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mlapique <mlapique@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/31 15:19:20 by mlapique          #+#    #+#             */
/*   Updated: 2024/03/15 17:10:18 by mlapique         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

//stk is hed node
void	lst_free(t_node *stk)
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
