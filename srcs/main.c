/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: m0rgenstern <m0rgenstern@student.42.fr>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/10 10:42:54 by ekrebs            #+#    #+#             */
/*   Updated: 2024/08/21 22:07:40 by m0rgenstern      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

static t_exit_status	ft_check_verbose_end(t_node *stk_a, const char *name)
{
	if (VERBOSE)
	{
		if (ft_stack_is_sorted_strict_ascending(stk_a) != true)
		{
			ft_printf("\n(%s): FAILURE\n", name);
			return (ERR);
		}
		else
		{
			ft_printf("\t  => is now sorted\n");
			ft_printf("\n(%s): is SUCCESS\n", name);
			return (SUCCESS);
		}
	}
	return (SUCCESS);
}

/**
 * brief : push_swap 
 * 
 * success :
 * writes the correct subject_stack operations in stdout
 * return SUCCESS
 * 
 * failure :
 * writes "Error\n" in stdout
 * return ERR
 * 
 */
int	main(int argc, char *argv[])
{
	t_exit_status	exit;
	t_node			*stk_a;
	t_node			*stk_b;

	if (VERBOSE)
		ft_printf("\n(%s)\n", __func__);
	if (argc == 0 + 1)
		return (0);
	if (ft_check_parsing(argv) != SUCCESS)
		return (ft_error(ERR_PARSING));
	stk_a = NULL;
	stk_b = NULL;
	if (ft_ini_stk_from_argv(&stk_a, argv, argc) != SUCCESS)
		return (ft_error(ERR_INI_STK_A));
	if (ft_stack_is_sorted_strict_ascending(stk_a) != true)
	{
		if (argc <= 3 + 1)
			ft_sort_small(&stk_a, argc);
		else
			ft_sort(&stk_a, &stk_b);
	}
	exit = ft_check_verbose_end(stk_a, __func__);
	return (ft_free_stack(stk_a), ft_free_stack(stk_b), exit);
}
