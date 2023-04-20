/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ccoste <ccoste@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/14 16:50:05 by ccoste            #+#    #+#             */
/*   Updated: 2023/04/19 18:37:54 by ccoste           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/libft.h"

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	int		i;
	char	*str;

	i = 0;
	str = ft_strdup(s);
	if (!str)
	{
		return (NULL);
	}
	while (str[i] != '\0')
	{
		str[i] = f(i, str[i]);
		i++;
	}
	return (str);
}
