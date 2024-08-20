/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: m0rgenstern <m0rgenstern@student.42.fr>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/10 10:42:54 by mlapique          #+#    #+#             */
/*   Updated: 2024/08/20 07:00:00 by m0rgenstern      ###   ########.fr       */
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

	if (argc == 0 + 1)
		return (0);
	if (ft_check_parsing(argv) != SUCCESS)
		return (ft_error(ERR));

	stk_a = NULL;
	stk_b = NULL;
	if (ft_ini_stk_from_argv(stk_a, argv, argc) != SUCCESS)
		return (ERR);

	if (ft_stack_is_sorted_ascending(stk_a) != true)
	{
		if (argc == 3 + 1)
			ft_sort_three(stk_a);
		else
			ft_sort(stk_a, stk_b);
	}
	return (ft_free_stack(stk_a), ft_free_stack(stk_b), SUCCESS);
}
