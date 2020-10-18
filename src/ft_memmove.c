/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ynakamot <ynakamot@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/07 13:32:15 by ynakamot          #+#    #+#             */
/*   Updated: 2020/10/18 10:07:51 by ynakamot         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

//copy N bytes from SRC to DEST.the memory areas may overlap.
void	*ft_memmove(void *dest, const void *src, size_t n)
{
	size_t			i;
	unsigned char	*d;
	unsigned char	*s;

	d = (unsigned char *)dest;
	s = (unsigned char *)src;
	if (d == NULL && s == NULL)
		return (dest);
	if (d < s)
		ft_memcpy(d, s, n);
	else
	{
		i = 1;
		while (i <= n)
		{
			d[n - i] = s[n - i];
			i++;
		}
	}
	return (dest);
}
