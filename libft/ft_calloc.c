/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rmouhoub <rmouhoub@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/07 17:10:42 by rmouhoub          #+#    #+#             */
/*   Updated: 2022/11/07 17:33:48 by rmouhoub         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t nmemb, size_t size)
{
	void	*buf;
	size_t	s;

	s = size * nmemb;
	buf = (void *)malloc(s);
	if (!buf)
		return (NULL);
	ft_bzero(buf, s);
	return (buf);
}
