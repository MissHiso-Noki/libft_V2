/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstlast.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ccoste <ccoste@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/23 13:34:18 by ccoste            #+#    #+#             */
/*   Updated: 2023/04/19 18:38:51 by ccoste           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/libft.h"

t_list	*ft_lstlast(t_list *lst)
{
	while (lst != NULL)
	{
		if (!lst->next)
		{
			return (lst);
		}
		lst = lst->next;
	}
	return (lst);
}
