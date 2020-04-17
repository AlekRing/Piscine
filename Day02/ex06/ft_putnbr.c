/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: emargare <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/03/05 22:26:48 by emargare          #+#    #+#             */
/*   Updated: 2020/03/09 13:27:07 by emargare         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int         ft_putchar(char c);

void ft_putnbr(int nb)
{
	int nb;
	int a;
	int b;

	 b = 1;
	if (nb <0)
	{
		ft_putchar('-');
		ft_putchar(nb *( -1 ));
	}
	if (nb < 10)
	{
		ft_putchar('0' + nb);
	}
	a = nb /10;
    	while (a > 0)
    	{
        	a = nb / 10;
        	b *= 10;
    	}
{
