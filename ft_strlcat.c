/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mfabbric <mfabbric@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/16 14:33:21 by mfabbric          #+#    #+#             */
/*   Updated: 2023/01/18 16:33:03 by mfabbric         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dest, char *src, size_t size)
{
	size_t	x;
	size_t	y;
	size_t	ldest;
	size_t	lsrc;

	ldest = ft_strlen(dest);
	lsrc = ft_strlen(src);
	x = ldest;
	y = 0;
	if (ldest < size - 1 && size > 0)
	{
		while (src[y] && ldest + y < size - 1)
		{
			dest[x] = src[y];
			x++;
			y++;
		}
		dest[x] = 0;	
	}
	if (ldest >= size)
		ldest = size;
	return (ldest + lsrc);
}