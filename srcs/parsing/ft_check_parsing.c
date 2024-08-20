/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_check_parsing.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: m0rgenstern <m0rgenstern@student.42.fr>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/20 05:33:04 by m0rgenstern       #+#    #+#             */
/*   Updated: 2024/08/20 09:17:25 by m0rgenstern      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "parsing.h"

		#     include <stdio.h>
static void	ft_print_args(char *argv[])
{
	int	i;

	printf("\n\t(%s):\n\t   ", __func__);
	i = 1;
	while (argv[i])
	{
		printf("%d   ", atoi(argv[i]));
		i++;
	}
	printf("\n");
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

/*
#include "stdio.h"
int main (int argc, char **argv)
{
	if (ft_check_parsing(argv) != SUCCESS)
		return (write (1, "arg", 3), ERR);
	int i = 1;
	while (argv[i])
	{
		printf("%d\n", atoi(argv[i]));
		i++;
	}
	return (SUCCESS);
}*/