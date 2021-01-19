/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstinsert.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ynakamot <ynakamot@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/16 15:19:35 by ynakamot          #+#    #+#             */
/*   Updated: 2021/01/19 22:00:28 by ynakamot         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstinsert(t_list *lst, t_list *new)
{
	t_list *tmp;

	if (!lst || !new)
		return ;
	tmp = lst->next;
	lst->next = new;
	new->next = tmp;
}
