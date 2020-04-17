/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_numbers.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: emargare <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/03/04 16:05:48 by emargare          #+#    #+#             */
/*   Updated: 2020/03/05 22:43:24 by emargare         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int         ft_putchar(char c);

void	ft_print_numbers(void)
{
	int	number;

	number = 0;
	while (number < 10)
	{
		ft_putchar('0' + number);
		number += 1;
	}
}
