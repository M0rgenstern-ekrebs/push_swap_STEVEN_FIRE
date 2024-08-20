/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_error.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: m0rgenstern <m0rgenstern@student.42.fr>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/10 10:45:46 by mlapique          #+#    #+#             */
/*   Updated: 2024/08/20 08:46:10 by m0rgenstern      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft/libft.h"
#include "error.h"

t_exit_status	ft_error(t_error_code err)
{
	char *str_err;
	#include <stdio.h>
	if (VERBOSE)
		{
			ft_putstr_fd("Error\t", 1);
			str_err = ft_itoa(err);
			if (!str_err)
				return (ft_putstr_fd("ERR FT_ERR\n", 1), ERR);
			ft_putstr_fd(str_err, 1);
			free(str_err);
		}
	else
		ft_putstr_fd("Error\n", 1);
	return (ERR);
}
