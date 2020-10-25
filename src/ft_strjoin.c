/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ynakamot <ynakamot@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/09 18:48:11 by ynakamot          #+#    #+#             */
/*   Updated: 2020/10/25 11:10:23 by ynakamot         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	char	*str;
	int		i;
	int		len;

	if (s1 == NULL && s2 == NULL)
		return (ft_strdup(""));
	if (s1 == NULL)
		return (ft_strdup(s1));
	if (s2 == NULL)
		return (ft_strdup(s2));
	i = 0;
	len = ft_strlen(s1) + ft_strlen(s2);
	if (!(str = malloc(sizeof(char) * (len + 1))))
		return (NULL);
	while (*s1)
		str[i++] = *s1++;
	while (*s2)
		str[i++] = *s2++;
	str[i] = '\0';
	return (str);
}
