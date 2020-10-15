/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ynakamot <ynakamot@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/07 23:26:20 by ynakamot          #+#    #+#             */
/*   Updated: 2020/10/08 13:43:44 by ynakamot         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strchr(const char *s, int c)
{
	char			*r;
	unsigned char	chr;

	r = (char *)s;
	chr = (unsigned char)c;
	while (*r)
	{
		if (*r == c)
			return (r);
		r++;
	}
	if (chr == '\0')
		return (r);
	else
		return (NULL);
}
