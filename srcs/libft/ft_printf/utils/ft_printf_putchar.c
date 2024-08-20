/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_pritnf_putchar.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ekrebs <ekrebs@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/13 15:55:15 by ekrebs            #+#    #+#             */
/*   Updated: 2024/07/14 17:34:42 by ekrebs           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../libftprintf.h"

int	ft_printf_putchar(const unsigned char c, int *error)
{
	int	w;

	w = write(STDOUT, &c, 1);
	if (w < 1)
		*error = CRASH_WRITE;
	return (w);
}
