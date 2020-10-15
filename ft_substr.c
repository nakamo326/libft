/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ynakamot <ynakamot@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/09 13:57:57 by ynakamot          #+#    #+#             */
/*   Updated: 2020/10/15 17:19:45 by ynakamot         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	size_t		i;
	size_t		slen;
	char		*p;

	if (!s)
		return (NULL);
	if (!(slen = ft_strlen(s)))
		return (NULL);
	if (slen < (start + len))
		len = slen - start;
	if (!(p = malloc(sizeof(char) * (len + 1))))
		return (NULL);
	i = 0;
	while (i < len && (i + start) <= slen)
	{
		p[i] = s[start + i];
		i++;
	}
	p[i] = '\0';
	return (p);
}
