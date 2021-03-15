/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sprealloc.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ynakamot <ynakamot@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/15 09:55:02 by ynakamot          #+#    #+#             */
/*   Updated: 2021/03/15 10:16:49 by ynakamot         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_sprealloc(void *ptr, size_t size)
{
	void	*new;
	int		i;

	if (!(new = malloc(size)))
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
