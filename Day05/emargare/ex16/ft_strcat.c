/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcat.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: emargare <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/03/10 19:03:52 by emargare          #+#    #+#             */
/*   Updated: 2020/03/10 19:05:48 by emargare         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strcat(char *dest, char *src);

char	*ft_strcat(char *dest, char *src)
{
	int i;
	int sec_i;

	i = 0;
	while (dest[i] != '\0')
		i++;
	sec_i = 0;
	while (src[sec_i] != '\0')
	{
		dest[i] = src[sec_i];
		i++;
		sec_i++;
	}
	dest[i] = '\0';
	return (dest);
}
