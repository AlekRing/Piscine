/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: emargare <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/03/12 09:49:19 by emargare          #+#    #+#             */
/*   Updated: 2020/03/12 13:59:04 by emargare         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

char	*ft_range(int min, int max)
{
	int		itr;
	char	*src_n;

	itr = 0;
	if ((min >= max) || !(src_n = malloc(sizeof(int) * (itr + 1))))
		return (NULL);
	while (min < max)
	{
		src_n[itr] = min;
		min++;
		itr++;
	}
	return (src_n);
}
