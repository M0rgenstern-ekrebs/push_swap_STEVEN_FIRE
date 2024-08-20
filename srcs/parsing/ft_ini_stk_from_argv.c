/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ini_stk_from_argv.c                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: m0rgenstern <m0rgenstern@student.42.fr>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/19 19:32:22 by ekrebs            #+#    #+#             */
/*   Updated: 2024/08/20 10:06:16 by m0rgenstern      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "parsing.h"
#include "../stack/stack.h"

/**
 * brief : ini stk a with argv values
 * returns SUCCESS
 * ERR if failure
 * 
 */
t_exit_status	ft_ini_stk_from_argv(t_node *stk_a, char *argv[], int argc)
{
	t_node	*new;
	int		i;

	i = 1;
	stk_a = ft_lst_new(ft_atoi(argv[i++]));
	if (!stk_a)
		return (ERR);
	while (i < argc)
	{
		new = ft_lst_new(ft_atoi(argv[i]));
		if (!new)
			return (ft_free_stack(stk_a), ERR);
		ft_lst_addback(stk_a, new);
		i++;
	}
	if (VERBOSE)
	{
		ft_print_stack(stk_a, "A");
		ft_print_stack_datas(stk_a, "A");
	}
	return (SUCCESS);
}
