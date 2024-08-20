/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_stack.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: m0rgenstern <m0rgenstern@student.42.fr>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/20 09:11:41 by m0rgenstern       #+#    #+#             */
/*   Updated: 2024/08/20 10:50:51 by m0rgenstern      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../stack.h"
#include "../../libft/libft.h"

void	ft_print_how_many_tabs(int displayed_number)
{
	if (displayed_number > 9999999 || displayed_number < -999999)
		ft_printf("\t");
	else
		ft_printf("\t\t");
}

void	ft_print_stack_datas(t_node *stk, char *name)
{
	t_node	*tmp;

	ft_printf("\n\t(%s):\n\n", __func__);
	tmp = stk;
	ft_printf("\t    ───────── %s ──────────\n", name);
	ft_printf("\t   │   i   │   value      │    i_target  │  push_cost  │");
	ft_printf("  above_median? │\n");
	ft_printf("\t   │───────│──────────────│──────────────│─────────────│");
	ft_printf("────────────────│\n");
	while (tmp)
	{
		ft_printf("\t   │   %d\t%d", tmp->index, tmp->value);
		ft_print_how_many_tabs(tmp->value);
		ft_printf("%d\t\t%d", tmp->ind_target, tmp->push_cost);
		ft_printf("\t\t%d\n", tmp->index >= ft_stack_median(stk));
		tmp = tmp->next;
	}
}

void	ft_print_stack(t_node *stk, char *name)
{
	t_node	*tmp;

	ft_printf("\n\t(%s):\n\n", __func__);
	tmp = stk;
	ft_printf("\t    ───────── %s ──────────\n", name);
	ft_printf("\t   │   i   │   value      │\n");
	ft_printf("\t   │───────│──────────────│\n");
	while (tmp)
	{
		ft_printf("\t   │   %d\t%d\n", tmp->index, tmp->value);
		tmp = tmp->next;
	}
}
