/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ynakamot <ynakamot@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/10 10:17:53 by ynakamot          #+#    #+#             */
/*   Updated: 2020/10/16 13:45:05 by ynakamot         ###   ########.fr       */
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

char		*ft_strtrim(char const *s1, char const *set)
{
	char	*str;
	size_t	len;
	size_t	i;

	if (!s1 || !set)
		return (NULL);
	i = 0;
	while (isset(s1[i], set) && s1[i] != '\0')
		i++;
	if (s1[i] == '\0')
		return (ft_strdup(""));
	len = ft_strlen(&s1[i]);
	while(isset(s1[i + len - 1], set))
		len--;
	if(!(str = ft_substr(s1, (unsigned int)i, len)))
		return (NULL);
	return (str);
}
