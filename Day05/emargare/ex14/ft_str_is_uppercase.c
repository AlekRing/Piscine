/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_uppercase.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: emargare <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/03/10 18:11:04 by emargare          #+#    #+#             */
/*   Updated: 2020/03/10 18:15:35 by emargare         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_str_is_uppercase(char *str);

int		ft_str_is_uppercase(char *str)
{
	int itr;

	itr = 0;
	if (str[itr] == 0)
		return (1);
	while (str[itr] != '\0')
	{
		while (!(str[itr] >= 65 && str[itr] <= 90))
		{
			itr++;
			return (0);
		}
		itr++;
	}
	return (1);
}
