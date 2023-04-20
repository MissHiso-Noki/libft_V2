/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstdelone.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ccoste <ccoste@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/23 14:05:57 by ccoste            #+#    #+#             */
/*   Updated: 2023/04/19 18:38:56 by ccoste           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/libft.h"

void	ft_lstdelone(t_list *lst, void (*del)(void*))
{
	if (!del)
	{
		return ;
	}
	if (lst)
	{
		(*del)(lst->content);
		free(lst);
	}
}
