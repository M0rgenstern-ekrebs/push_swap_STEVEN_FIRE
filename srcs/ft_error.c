/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_error.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: m0rgenstern <m0rgenstern@student.42.fr>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/10 10:45:46 by ekrebs            #+#    #+#             */
/*   Updated: 2024/08/21 21:54:02 by m0rgenstern      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft/libft.h"
#include "error.h"

static void	ft_translate_error(t_error_code err)
{
	if (err == ERR_PARSING)
		ft_printf("\t (ERR_PARSING)\n");
	else if (err == ERR_INI_STK_A)
		ft_printf("\t (ERR_PARSING)\n");
}

/**
 * 
 * brief : if verbose, displays useful info
 * if not, returns ERR if error
 */
t_exit_status	ft_error(t_error_code err)
{
	unsigned char	ret_value;

	ret_value = ERR;
	if (VERBOSE)
	{
		ft_printf("Error %d\n", err);
		ft_translate_error(err);
		ft_printf("\n(main): returned %d\n\n", ret_value);
	}
	else
		ft_putstr_fd("Error\n", 1);
	return (ret_value);
}
