/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mfabbric <mfabbric@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/16 14:33:48 by mfabbric          #+#    #+#             */
/*   Updated: 2023/01/18 14:06:02 by mfabbric         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char   *ft_strnstr(const char *big, const char *little, size_t len)
{
	size_t	i;
	size_t	j;
	size_t	n_len;
	char	*count;

	i = 0;
	count = (char *)big;
	n_len = ft_strlen(little);
	if (n_len == 0 || big == little)
		return (count);
	while (count[i] != '\0' && i < len)
	{
		j = 0;
		while (count[i + j] != '\0' && little[j] != '\0'
				&& count[i + j] == little[j] && i + j < len)
			j++;
		if (j == n_len)
			return (count + i);
		i++;
	}
	return (0);
}