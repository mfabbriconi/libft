/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mfabbric <mfabbric@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/16 14:33:01 by mfabbric          #+#    #+#             */
/*   Updated: 2023/01/17 14:52:04 by mfabbric         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char *ft_strchr(const char *s, int c)
{
	const char	*dest;
	
	dest = s;
	while (*dest != 0 || c == 0)
	{
		if (*dest == c)
			return ((char *)dest);
		dest++;
	}
	return (NULL);
}