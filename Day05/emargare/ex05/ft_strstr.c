/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: emargare <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/03/09 20:22:21 by emargare          #+#    #+#             */
/*   Updated: 2020/03/10 12:59:54 by emargare         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strstr(char *str, char *to_find);

char	*ft_strstr(char *str, char *to_find)
{
	int itr;
	int dst_itr;

	itr = 0;
	if (to_find[itr] == '\0')
		return (str);
	while (str[itr] != '\0')
	{
		dst_itr = 0;
		while (str[itr + dst_itr] == to_find[dst_itr])
		{
			dst_itr++;
			if (to_find[dst_itr] == '\0')
				return (&str[itr]);
		}
		itr++;
	}
	return (0);
}
