/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_check_parsing.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: m0rgenstern <m0rgenstern@student.42.fr>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/20 05:33:04 by m0rgenstern       #+#    #+#             */
/*   Updated: 2024/08/20 10:52:06 by m0rgenstern      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "parsing.h"

static void	ft_print_args(char *argv[])
{
	int	i;

	ft_printf("\n\t(%s):\n\t   ", __func__);
	i = 1;
	while (argv[i])
	{
		ft_printf("%d   ", atoi(argv[i]));
		i++;
	}
	ft_printf("\n");
}

t_exit_status	ft_check_parsing(char *argv[])
{
	if (!argv[1][0])
		return (ERR);
	if (ft_check_is_int(argv) != SUCCESS)
		return (ERR);
	if (ft_check_no_double(argv) != SUCCESS)
		return (ERR);
	if (VERBOSE)
		ft_print_args(argv);
	return (SUCCESS);
}
