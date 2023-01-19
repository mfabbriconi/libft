/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mfabbric <mfabbric@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/16 14:32:16 by mfabbric          #+#    #+#             */
/*   Updated: 2023/01/17 13:07:50 by mfabbric         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void *ft_memchr(const void *s, int c, size_t n)
{
	const char	*s1;
	char		c1;

	s1 = s;
	c1 = c;
	while (n && (*s1 != c1))
	{
		s1++;
		n--;
	}
	if (n)
		return ((void *)s1);
	return (NULL);
}