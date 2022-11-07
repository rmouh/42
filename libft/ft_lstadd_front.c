/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_front.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rmouhoub <rmouhoub@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/07 17:14:04 by rmouhoub          #+#    #+#             */
/*   Updated: 2022/11/07 17:32:44 by rmouhoub         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstadd_front(t_list **alst, t_list *new)
{
	if (*alst == NULL)
	{
		new->next = NULL;
		*alst = new;
	}
	else
	{
		new->next = *alst;
		*alst = new;
	}
}
