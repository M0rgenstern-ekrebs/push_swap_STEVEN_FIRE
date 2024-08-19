/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ini_stk_from_argv.c                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ekrebs <ekrebs@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/19 19:32:22 by ekrebs            #+#    #+#             */
/*   Updated: 2024/08/19 20:36:34 by ekrebs           ###   ########.fr       */
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
	t_node *new;
	int	i;

	i = 1;
	stk_a = lst_new(argv[i++]);
	if (!stk_a)
		return (ERR);
	while (i < argc)
	{
		new = lst_new(argv[i]);
		if(!new)
			return (free_stack(stk_a), ERR);
		lst_addback(stk_a, new);
		i++;
	}
	return (SUCCESS);
}