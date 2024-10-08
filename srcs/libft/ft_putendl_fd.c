/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putendl_fd.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ekrebs <ekrebs@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/15 11:50:45 by ekrebs            #+#    #+#             */
/*   Updated: 2023/12/04 18:03:19 by ekrebs           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_putendl_fd(char *s, int fd)
{
	if (!s || fd < 0 || fd >= 1024)
		return ;
	ft_putstr_fd(s, fd);
	ft_putchar_fd('\n', fd);
	return ;
}
