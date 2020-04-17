/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: emargare <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/03/09 17:22:23 by emargare          #+#    #+#             */
/*   Updated: 2020/03/10 13:22:23 by emargare         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strcpy(char *dest, char *src);

char	*ft_strcpy(char *dest, char *src)
{
	int itr;

	itr = 0;
	while (src[itr] != '\0')
	{
		dest[itr] = src[itr];
		itr++;
	}
	dest[itr] = '\0';
	return (dest);
}
