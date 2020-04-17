/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: emargare <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/03/07 14:51:08 by emargare          #+#    #+#             */
/*   Updated: 2020/03/07 19:17:46 by emargare         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_iterative_power(int nb, int power);

int		ft_iterative_power(int nb, int power)
{
	int c;

	if (power < 0)
		return (0);
	if (nb == 0 || power == 0)
		return (1);
	c = nb;
	while (power > 1)
	{
		nb = c * nb;
		power--;
	}
	return (nb);
}
