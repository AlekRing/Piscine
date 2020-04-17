/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcapitalize.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: emargare <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/03/10 16:45:17 by emargare          #+#    #+#             */
/*   Updated: 2020/03/10 20:40:56 by emargare         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strcapitalize(char *str);

char	*ft_strcapitalize(char *str)
{
	int itr;
	int pt_up;

	pt_up = 1;
	itr = 0;
	while (str[itr] != '\0')
	{
		if ((str[itr] >= '0' && str[itr] <= '9') ||
			(str[itr] >= 'a' && str[itr] <= 'z') ||
			(str[itr] >= 'A' && str[itr] <= 'Z'))
		{
			if (pt_up == 1 && (str[itr] >= 'a' && str[itr] <= 'z'))
				str[itr] = str[itr] - 32;
			else if (pt_up == 0 && (str[itr] >= 'A' && str[itr] <= 'Z'))
				str[itr] = str[itr] + 32;
			pt_up = 0;
		}
		else
			pt_up = 1;
		itr++;
	}
	return (str);
}
