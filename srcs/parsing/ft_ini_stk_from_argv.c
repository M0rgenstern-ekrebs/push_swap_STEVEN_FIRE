/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ini_stk_from_argv.c                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ekrebs <ekrebs@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/19 19:32:22 by ekrebs            #+#    #+#             */
/*   Updated: 2024/08/21 12:51:52 by ekrebs           ###   ########.fr       */
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
t_exit_status	ft_ini_stk_from_argv(t_node **stk_a, char *argv[], int argc)
{
	t_node	*new;
	int		i;

	i = 1;
	*stk_a = ft_lst_new(ft_atoi(argv[i++]));
	if (!*stk_a)
		return (ERR);
	while (i < argc)
	{
		new = ft_lst_new(ft_atoi(argv[i]));
		if (!new)
			return (ft_free_stack(*stk_a), ERR);
		ft_lst_addback(*stk_a, new);
		i++;
	}
	if (VERBOSE)
	{
		ft_print_stack_datas(*stk_a, "A");
	}
	return (SUCCESS);
}
