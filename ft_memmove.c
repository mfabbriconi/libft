/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mfabbric <mfabbric@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/16 14:32:30 by mfabbric          #+#    #+#             */
/*   Updated: 2023/01/16 14:32:30 by mfabbric         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void    *ft_memmove(void *dest, const void *src, size_t len)
{
    unsigned char           *d;
    const unsigned char     *s;

    d = dest;
    s = src;
	if (!dest && !src)
		return (0);
	if (dest < src)
        return (ft_memcpy(dest, src, len));
    while (len-- > 0)
        d[len] = s[len];
    return (dest);
}