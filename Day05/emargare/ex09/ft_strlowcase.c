/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlowcase.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: emargare <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/03/10 12:38:01 by emargare          #+#    #+#             */
/*   Updated: 2020/03/10 20:39:41 by emargare         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strlowcase(char *str);

char	*ft_strlowcase(char *str)
{
	int itr;
	int s_itr;

	itr = 0;
	while (str[itr] != '\0')
	{
		s_itr = 0;
		while (str[itr] >= 65 && str[itr] <= 90)
		{
			str[itr] = str[itr] + 32;
			s_itr++;
		}
		itr++;
	}
	return (str);
}
