/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: emargare <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/03/05 15:31:32 by emargare          #+#    #+#             */
/*   Updated: 2020/03/05 22:44:10 by emargare         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int         ft_putchar(char c);

void		ft_print_comb(void)
{
	int	a;
	int b;
	int z;

	z = -1;
	while (z++ < 7)
	{
		a = z;
		while (a++ < 8)
		{
			b = a;
			while (b++ < 9)
			{
				ft_putchar('0' + z);
				ft_putchar('0' + a);
				ft_putchar('0' + b);
				if (z != 7)
				{
					ft_putchar(',');
					ft_putchar(' ');
				}
			}
		}
	}
}
