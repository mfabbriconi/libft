/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mfabbric <mfabbric@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/16 14:33:53 by mfabbric          #+#    #+#             */
/*   Updated: 2023/01/17 15:05:40 by mfabbric         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char *ft_strrchr(const char *s, int c)
{
    const char	*dest;
	int			len;
	
	dest = s;
    len = ft_strlen(s);
    if (!s)
		return (NULL);
	while (len >= 0)
	{
		if (dest[len] == c)
			return ((char *)(s + len));
		len--;
	}
	return (NULL);
}