/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: emargare <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/03/11 19:37:54 by emargare          #+#    #+#             */
/*   Updated: 2020/03/12 13:32:58 by emargare         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

char	*ft_strdup(char *src)
{
	int		itr;
	char	*src_n;
	int		nb;

	itr = 0;
	while (src[itr])
		itr++;
	if (!(src_n = malloc(sizeof(char) * (itr + 1))))
		return (NULL);
	nb = 0;
	while (src[nb])
	{
		src_n[nb] = src[nb];
		nb++;
	}
	return (src_n);
}
