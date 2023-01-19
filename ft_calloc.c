/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mfabbric <mfabbric@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/16 14:31:44 by mfabbric          #+#    #+#             */
/*   Updated: 2023/01/17 11:05:17 by mfabbric         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void    *ft_calloc(size_t nmemb, size_t size)
{
    void    *path;

    path = malloc(nmemb * size);
    if (!path)
        return (NULL);
    ft_bzero(path, nmemb *size);
    return ((void *) path);
}