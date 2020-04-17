/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: emargare <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/03/10 19:08:44 by emargare          #+#    #+#             */
/*   Updated: 2020/03/10 19:12:16 by emargare         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strncat(char *dest, char *src, int nb);

char	*ft_strncat(char *dest, char *src, int nb)
{
	int i;
	int sec_i;

	i = 0;
	while (dest[i] != '\0')
		i++;
	sec_i = 0;
	while (src[sec_i] != '\0' && nb > 0)
	{
		dest[i] = src[sec_i];
		i++;
		sec_i++;
		nb--;
	}
	dest[i] = '\0';
	return (dest);
}
