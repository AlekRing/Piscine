/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_printable.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: emargare <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/03/10 18:18:09 by emargare          #+#    #+#             */
/*   Updated: 2020/03/10 18:39:02 by emargare         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_str_is_printable(char *str);

int		ft_str_is_printable(char *str)
{
	int itr;

	itr = 0;
	if (str[itr] == 0)
		return (1);
	while (str[itr] != '\0')
	{
		while (!(str[itr] >= 32 && str[itr] <= 127))
		{
			itr++;
			return (0);
		}
		itr++;
	}
	return (1);
}
