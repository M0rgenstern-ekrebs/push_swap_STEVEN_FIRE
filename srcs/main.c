/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ekrebs <ekrebs@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/10 10:42:54 by mlapique          #+#    #+#             */
/*   Updated: 2024/08/20 20:10:51 by ekrebs           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

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
	t_node	*stk_a;
	t_node	*stk_b;
	
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
		if (argc == 3 + 1)
			ft_sort_three(&stk_a);
		else
			ft_sort(&stk_a, &stk_b);
	}
	if (VERBOSE)
		ft_printf("\n(%s): SUCCESS\n", __func__);
	return (ft_free_stack(stk_a), ft_free_stack(stk_b), EXIT_SUCCESS);
}
