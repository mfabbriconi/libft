/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mfabbric <mfabbric@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/16 14:32:26 by mfabbric          #+#    #+#             */
/*   Updated: 2023/01/16 14:32:26 by mfabbric         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dst, const void *src, size_t len)
{
	unsigned char           *d;
    const unsigned char     *s;

    d = dst;
    s = src;
	if (!dst && !src)
		return (0);
	while (len-- > 0)
        *d++ = *s++;
    return (dst);
}