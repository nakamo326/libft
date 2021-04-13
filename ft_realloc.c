/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_realloc.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ynakamot <ynakamot@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/11 00:47:35 by ynakamot          #+#    #+#             */
/*   Updated: 2021/03/13 09:36:26 by ynakamot         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
** ptrを第二引数に与えたサイズまで拡張。元のheap領域は解放される。mallocに失敗したときはnullを返す。この時元の領域はfreeされない。
** 引数ptrにnullを渡したときmalloc(size)と同じ動作になる。
*/

void	*ft_realloc(void *ptr, size_t size)
{
	void	*new;

	new = malloc(size);
	if (!new)
		return (NULL);
	if (ptr == NULL)
		return (new);
	ft_memcpy(new, ptr, size);
	free(ptr);
	return (new);
}
