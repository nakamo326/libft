/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ynakamot <ynakamot@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/08/14 08:53:27 by ynakamot          #+#    #+#             */
/*   Updated: 2020/10/13 09:30:41 by ynakamot         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	ft_isspace(char *str)
{
	if (*str == '\v' || *str == '\r' || *str == '\f' ||
		*str == '\t' || *str == '\n' || *str == ' ')
	{
		return (1);
	}
	return (0);
}

int			ft_atoi(const char *nptr)
{
	int				sign;
	unsigned long	num;

	num = 0;
	sign = 1;
	while (ft_isspace((char *)nptr))
		nptr++;
	if (*nptr == '-' || *nptr == '+')
	{
		if (*nptr == '-')
			sign = -1;
		nptr++;
	}
	while (*nptr >= '0' && *nptr <= '9')
	{
		num = num * 10 + *nptr - '0';
		nptr++;
	}
	if (sign == 1 && num > LONG_MAX)
		return (-1);
	if (sign == -1 && (num - 1) > LONG_MAX)
		return (0);
	return (sign * num);
}
