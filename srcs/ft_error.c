/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_error.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: m0rgenstern <m0rgenstern@student.42.fr>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/10 10:45:46 by mlapique          #+#    #+#             */
/*   Updated: 2024/08/20 06:48:59 by m0rgenstern      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft/libft.h"
#include "error.h"

t_error_code	ft_error(t_error_code err)
{
	ft_putstr_fd("Error\n", 1);
	return (err);
}
