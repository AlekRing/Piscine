/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: emargare <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/03/09 10:12:19 by emargare          #+#    #+#             */
/*   Updated: 2020/03/09 13:33:33 by emargare         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_putchar(char c);

void	ft_putnbr(int nb);

void	ft_putnbr(int nb)
{
	int		n_countr;
	char	temp[11];

	n_countr = 0;
	if (nb < 0)
	{
		ft_putchar('-');
		if (nb == -2147483648)
		{
			ft_putchar('0' + 2);
			nb = -147483648;
		}
		nb *= -1;
	}
	while (nb > 0)
	{
		temp[n_countr] = nb % 10 + '0';
		n_countr++;
		nb /= 10;
	}
	while (n_countr >= 0)
	{
		ft_putchar(temp[n_countr]);
		n_countr--;
	}
}
