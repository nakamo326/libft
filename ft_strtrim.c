/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ynakamot <ynakamot@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/10 10:17:53 by ynakamot          #+#    #+#             */
/*   Updated: 2020/10/13 02:09:17 by ynakamot         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	isset(char c, char const *set)
{
	while (*set)
	{
		if (c == *set)
			return (1);
		set++;
	}
	return (0);
}

static int	count(char const *s1, char const *set)
{
	int len;

	len = 0;
	while (isset(*s1, set))
		s1++;
	if (*s1 == '\0')
		return (len);
	len = ft_strlen(s1) - 1;
	while (isset(s1[len], set))
		len--;
	return (len + 1);
}

char		*ft_strtrim(char const *s1, char const *set)
{
	char	*str;
	int		len;
	int		i;

	if (!s1 || !set)
		return (NULL);
	i = 0;
	len = count(s1, set);
	if (!(str = malloc(sizeof(char) * (len + 1))))
		return (NULL);
	while (isset(*s1, set))
		s1++;
	while (i < len)
		str[i++] = *s1++;
	str[i] = '\0';
	return (str);
}
