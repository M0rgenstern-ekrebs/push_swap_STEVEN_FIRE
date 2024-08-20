/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_check_no_doubles.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: m0rgenstern <m0rgenstern@student.42.fr>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/20 05:49:37 by m0rgenstern       #+#    #+#             */
/*   Updated: 2024/08/20 05:55:55 by m0rgenstern      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "parsing.h"

t_exit_status	ft_check_no_double(char *argv[])
{
	int	i;
	int	j;

	j = 2;
	i = 1;
	while (argv[i])
	{
		while (argv[j])
		{
			if (ft_atoi(argv[i]) == ft_atoi(argv[j]))
				return (ERR);
			j++;
		}
		i++;
		j = i + 1;
	}
	return (SUCCESS);
}
