/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ynakamot <ynakamot@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/12 12:42:13 by ynakamot          #+#    #+#             */
/*   Updated: 2020/10/13 09:30:55 by ynakamot         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char			*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	char	*p;
	int		i;
	int		len;

	if (!s)
		return (NULL);
	len = ft_strlen(s);
	if (!(p = ft_calloc(len + 1, sizeof(char))))
		return (NULL);
	i = 0;
	while (i < len)
	{
		p[i] = f(i, s[i]);
		i++;
	}
	return (p);
}
