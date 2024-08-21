/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_check_is_int.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: m0rgenstern <m0rgenstern@student.42.fr>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/20 05:49:41 by m0rgenstern       #+#    #+#             */
/*   Updated: 2024/08/22 01:33:08 by m0rgenstern      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "parsing.h"

static char	*trim_sign_and_zeros(char *argv, int *sign)
{
	int	i;

	i = 0;
	*sign = 1;
	if (argv[0] == '-' || argv[0] == '+')
	{
		i++;
		if (argv[0] == '-')
			*sign = -1;
	}
	while (argv[i] == '0' && argv[i + 1] != '\0')
	{
		i++;
	}
	return (ft_substr(argv, i, ft_strlen(argv)));
}

/**
 * brief 
 * returns <0 if is INT
 */
static int	check_limits(char *value)
{
	int	len;
	int	sign;
	int	cmp;

	cmp = 0;
	sign = 1;
	value = trim_sign_and_zeros(value, &sign);
	if (!value)
		return (ERR);
	len = ft_strlen(value);
	if (len > 10)
		return (ERR);
	if (len == 10)
	{
		if (sign == 1)
			cmp = ft_strncmp("2147483647", value, len);
		else
			cmp = ft_strncmp("2147483648", value, len);
	}
	return (free(value), cmp);
}

t_exit_status	ft_check_is_int(char *argv[])
{
	int	i;
	int	j;

	j = 0;
	i = 1;
	while (argv[i])
	{
		while (argv[i][j])
		{
			if ((argv[i][j] == '+' || argv[i][j] == '-')
			&& argv[i][j + 1] != '\0' && j == 0)
				j++;
			if (ft_isdigit(argv[i][j]) == 0)
				return (ERR);
			j++;
		}
		if (check_limits(argv[i]) < 0)
			return (ERR);
		i++;
		j = 0;
	}
	return (SUCCESS);
}
