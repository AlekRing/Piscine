/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strupcase.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: emargare <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/03/10 12:15:13 by emargare          #+#    #+#             */
/*   Updated: 2020/03/10 20:38:16 by emargare         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strstr(char *str, char *to_find);

char	*ft_strupcase(char *str)
{
	int itr;
	int s_itr;

	itr = 0;
	while (str[itr] != '\0')
	{
		s_itr = 0;
		while (str[itr] >= 97 && str[itr] <= 122)
		{
			str[itr] = str[itr] - 32;
			s_itr++;
		}
		itr++;
	}
	return (str);
}
