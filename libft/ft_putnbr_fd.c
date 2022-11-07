/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rmouhoub <rmouhoub@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/07 17:17:16 by rmouhoub          #+#    #+#             */
/*   Updated: 2022/11/07 18:27:02 by rmouhoub         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_putnbr_fd(int n, int fd)
{
	if (n == -2147483648)
	{
		ft_putchar_fd('-', fd);
		ft_putchar_fd('2', fd);
		ft_putnbr_fd(147483648, fd);
	}
	else if (n < 0)
	{
		ft_putchar_fd('-', fd);
		ft_putstr_fd(ft_itoa(n * (-1)), fd);
	}
	else
	{
		t_putstr_fd (ft_itoa (n), fd);
	}
}

/*
#include <stdio.h>
int main(void)
{
	const char* filename = "out.txt";

	int fd = open(filename, O_WRONLY);
	if (fd == -1) {
		perror("open");
		exit(EXIT_FAILURE);
	}

	ft_putnbr_fd(-900000, fd);
	printf("Done Writing!\n");

	close(fd);
	exit(EXIT_SUCCESS);
}
*/