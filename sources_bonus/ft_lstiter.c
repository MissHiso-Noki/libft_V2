/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstiter.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ccoste <ccoste@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/23 16:42:02 by ccoste            #+#    #+#             */
/*   Updated: 2023/04/19 18:38:54 by ccoste           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/libft.h"

void	ft_lstiter(t_list *lst, void (*f)(void *))
{
	if (!f)
	{
		return ;
	}
	while (lst != NULL)
	{
		(*f)(lst->content);
		lst = lst->next;
	}
}
