/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sprealloc.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ynakamot <ynakamot@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/15 09:55:02 by ynakamot          #+#    #+#             */
/*   Updated: 2021/04/05 11:13:24 by ynakamot         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_sprealloc(void *ptr, size_t size)
{
	void	*new;
	int		i;

	new = malloc(size);
	if (!new)
		return (NULL);
	if (ptr == NULL)
		return (new);
	i = 0;
	while (((char **)ptr)[i])
		i++;
	ft_memcpy(new, ptr, sizeof(ptr) * (i + 1));
	free(ptr);
	return (new);
}
