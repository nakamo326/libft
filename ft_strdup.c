/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ynakamot <ynakamot@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/08/18 10:49:34 by ynakamot          #+#    #+#             */
/*   Updated: 2021/03/13 09:30:34 by ynakamot         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(const char *src)
{
	char	*str;
	size_t	len;

	len = ft_strlen(src);
	str = malloc(sizeof(*str) * (len + 1));
	if (!str)
		return (NULL);
	ft_strlcpy(str, src, len + 1);
	return (str);
}
