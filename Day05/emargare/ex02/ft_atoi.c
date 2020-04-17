/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: emargare <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/03/09 13:38:15 by emargare          #+#    #+#             */
/*   Updated: 2020/03/10 19:46:14 by emargare         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_atoi(char *str);

int		ft_atoi(char *str)
{
	int ret;
	int sign;
	int itr;

	sign = 1;
	itr = 0;
	ret = 0;
	while (str[itr] == ' ' || str[itr] == '\n' || str[itr] == '\t' ||
			str[itr] == '\v' || str[itr] == '\r' || str[itr] == '\f')
		itr++;
	if (str[itr] == '-')
	{
		sign = -1;
		itr++;
		if (str[itr] == '+')
			return (0);
	}
	if (str[itr] == '+')
		itr++;
	while (str[itr] >= '0' && str[itr] <= '9')
	{
		ret = ret * 10 + str[itr] - '0';
		itr++;
	}
	return (ret * sign);
}
