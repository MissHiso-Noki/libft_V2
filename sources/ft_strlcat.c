/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ccoste <ccoste@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/07 14:48:50 by ccoste            #+#    #+#             */
/*   Updated: 2023/04/19 18:38:02 by ccoste           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t size)
{
	unsigned int	sizesrc;
	unsigned int	sizedest;
	unsigned int	i;

	i = 0;
	sizesrc = ft_strlen(src);
	if (!dst && size == 0)
	{
		return (sizesrc);
	}
	sizedest = ft_strlen(dst);
	if (size <= sizedest)
	{
		return (size + sizesrc);
	}
	while ((size -1) > (i + sizedest) && src[i] != '\0')
	{
		dst[sizedest + i] = src[i];
		i++;
	}
	dst[sizedest + i] = '\0';
	return (sizesrc + sizedest);
}

//int main(void)
//{
//	char	dest[100] = "trucmuche";
//	char	src[100]= "help";

////	printf("f %ld\n", ft_strlcat(dest, src, 20));
//	printf("f %ld\n", strlcat(dest, src, 20));
//	printf("f %s\n", dest);
//}
