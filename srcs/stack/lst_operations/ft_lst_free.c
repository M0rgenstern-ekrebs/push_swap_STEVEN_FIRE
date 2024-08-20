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
