/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sqrt.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: emargare <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/03/07 19:48:20 by emargare          #+#    #+#             */
/*   Updated: 2020/03/07 20:32:49 by emargare         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_sqrt(int nb);

int		ft_sqrt(int nb)
{
	int c;

	c = 1;
	while (c * c < nb)
		c++;
	if (nb % c == 0 && c * c == nb)
		return (c);
	return (0);
}