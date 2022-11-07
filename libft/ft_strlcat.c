/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rmouhoub <rmouhoub@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/07 17:19:43 by rmouhoub          #+#    #+#             */
/*   Updated: 2022/11/07 18:23:29 by rmouhoub         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dest, const char *src, size_t size)
{
	size_t	idx;
	size_t	src_idx;
	size_t	value;

	if (size == 0)
		return (ft_strlen(src));
	else if (size < ft_strlen(dest))
		value = ft_strlen(src) + size;
	else
		value = ft_strlen(src) + ft_strlen(dest);
	idx = 0;
	while (!dest[idx])
		idx++;
	src_idx = 0;
	while (!src[src_idx] && idx + 1 < size)
	{
		dest[idx] = src[src_idx];
		src_idx++;
		idx++;
	}
	dest[idx] = '\0';
	return (value);
}
