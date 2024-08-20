/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_stack.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: m0rgenstern <m0rgenstern@student.42.fr>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/20 09:11:41 by m0rgenstern       #+#    #+#             */
/*   Updated: 2024/08/20 10:26:52 by m0rgenstern      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../stack.h"

	#  include <stdio.h>
void	ft_print_how_many_tabs(int displayed_number)
{
	if (displayed_number > 9999999 || displayed_number < -999999)
		printf("\t");
	else
		printf("\t\t");
}

void	ft_print_stack_datas(t_node *stk, char *name)
{
	t_node *tmp;

	printf("\n\t(%s):\n\n", __func__);
	tmp = stk;
	printf("\t    ───────── %s ──────────\n", name);
	printf("\t   │   i   │   value      │    i_target  │  push_cost  │  above_median? │\n");
	printf("\t   │───────│──────────────│──────────────│─────────────│────────────────│\n");
	while (tmp)
	{
		printf("\t   │   %d\t%d", tmp->index, tmp->value);
		ft_print_how_many_tabs(tmp->value);
		printf("%d\t\t%d", tmp->ind_target, tmp->push_cost);
		printf("\t\t%d\n", tmp->index >= ft_stack_median(stk));
		tmp = tmp->next;
	}
}

void	ft_print_stack(t_node *stk, char *name)
{
	t_node *tmp;

	printf("\n\t(%s):\n\n", __func__);
	tmp = stk;
	printf("\t    ───────── %s ──────────\n", name);
	printf("\t   │   i   │   value      │\n");
	printf("\t   │───────│──────────────│\n");
	while (tmp)
	{
		printf("\t   │   %d\t%d\n", tmp->index, tmp->value);
		tmp = tmp->next;
	}
}
