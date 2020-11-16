/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_base_fd.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ynakamot <ynakamot@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/08/14 10:11:20 by ynakamot          #+#    #+#             */
/*   Updated: 2020/11/10 23:11:03 by ynakamot         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static size_t	base_check(char *base)
{
	size_t len;

	len = 0;
	while (base[len] != '\0')
	{
		if (base[len] == '+' || base[len] == '-')
			return (0);
		len++;
	}
	if (len == 0 || len == 1)
		return (0);
	return (len);
}

static size_t	base_multiple_check(char *base, size_t len)
{
	size_t i;
	size_t j;

	i = 0;
	while (i < len)
	{
		j = i + 1;
		while (j < len)
		{
			if (base[i] == base[j])
				return (0);
			j++;
		}
		i++;
	}
	return (1);
}

static size_t	output_number_base(unsigned long long unb, char *base, size_t blen)
{
	static size_t len;

	len++;
	if (unb / blen == 0)
	{
		ft_putchar_fd(base[unb], 1);
		return (len);
	}
	output_number_base(unb / blen, base, blen);
	ft_putchar_fd(base[unb % blen], 1);
	return (len);
}

size_t			ft_putnbr_base(unsigned long long nbr, char *base)
{
	size_t	blen;
	size_t	len;

	len = 0;
	blen = base_check(base);
	if (!(base_multiple_check(base, blen)))
		return (ERROR);
	if (blen)
		len = output_number_base(nbr, base, blen);
	return (len);
}
