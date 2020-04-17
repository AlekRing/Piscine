/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_alpha.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: emargare <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/03/10 17:34:55 by emargare          #+#    #+#             */
/*   Updated: 2020/03/10 20:41:53 by emargare         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_str_is_alpha(char *str);

int		ft_str_is_alpha(char *str)
{
	int itr;

	itr = 0;
	if (str[itr] == 0)
		return (1);
	while (str[itr] != '\0')
	{
		while (!((str[itr] >= 65 && str[itr] <= 90) ||
					(str[itr] >= 97 && str[itr] <= 122)))
		{
			itr++;
			return (0);
		}
		itr++;
	}
	return (1);
}
