/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: emargare <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/03/09 18:22:01 by emargare          #+#    #+#             */
/*   Updated: 2020/03/09 20:36:29 by emargare         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strncpy(char *dest, char *src, unsigned int n);

char	*ft_strncpy(char *dest, char *src, unsigned int n)
{
	unsigned int itr;

	itr = 0;
	while (src[itr] != '\0' && itr < n)
	{
		dest[itr] = src[itr];
		itr++;
	}
	if (src[itr] == '\0' && itr < n)
	{
		while (dest[itr] != '\0')
		{
			dest[itr] = '\0';
			itr++;
		}
	}
	return (dest);
}
