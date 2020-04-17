/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_range.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: emargare <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/03/12 13:34:24 by emargare          #+#    #+#             */
/*   Updated: 2020/03/12 14:16:50 by emargare         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int		ft_ultimate_range(int **range, int min, int max)
{
	int		itr;
	int		*n_range;

	itr = 0;
	if ((min >= max) || !(src_n = malloc(sizeof(int) * (itr + 1))))
		return (NULL);
	while (min < max)
	{
		src_n[itr] = min;
		min++;
		itr++;
	}
	*range = src_n;
	return (*range);
}
