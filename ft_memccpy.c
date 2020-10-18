/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memccpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ynakamot <ynakamot@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/06 20:53:24 by ynakamot          #+#    #+#             */
/*   Updated: 2020/10/18 10:04:27 by ynakamot         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

//copy N bytes from SRC to DEST,stopping when char C is found.
void	*ft_memccpy(void *dest, const void *src, int c, size_t n)
{
	size_t			i;
	unsigned char	*d;
	unsigned char	*s;
	unsigned char	chr;

	i = 0;
	d = (unsigned char *)dest;
	s = (unsigned char *)src;
	chr = (unsigned char)c;
	while (i < n)
	{
		d[i] = s[i];
		if (d[i] == chr)
			return (&d[i + 1]);
		i++;
	}
	return (0);
}
