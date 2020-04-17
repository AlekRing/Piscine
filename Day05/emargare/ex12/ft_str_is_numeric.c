/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_numeric.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: emargare <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/03/10 17:54:47 by emargare          #+#    #+#             */
/*   Updated: 2020/03/10 18:04:07 by emargare         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_str_is_numeric(char *str);

int		ft_str_is_numeric(char *str)
{
	int itr;

	itr = 0;
	if (str[itr] == 0)
		return (1);
	while (str[itr] != '\0')
	{
		while (!(str[itr] >= 48 && str[itr] <= 57))
		{
			itr++;
			return (0);
		}
		itr++;
	}
	return (1);
}
