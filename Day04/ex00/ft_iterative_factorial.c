/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: emargare <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/03/07 10:13:57 by emargare          #+#    #+#             */
/*   Updated: 2020/03/07 19:16:51 by emargare         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int ft_iterative_factorial(int nb);

int	ft_iterative_factorial(int nb)
{
	int i;
	int f;

	if (nb < 0)
	{
		return (0);
	}
	else if (nb == 0)
	{
		return (1);
	}
	i = 0;
	f = 1;
	while (i++ < nb)
	{
		f *= i;
	}
	return (f);
}
