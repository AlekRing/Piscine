/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_params.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: emargare <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/03/11 17:54:34 by emargare          #+#    #+#             */
/*   Updated: 2020/03/11 19:07:04 by emargare         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

int		ft_strcmp(char *s1, char *s2)
{
	int i;

	i = 0;
	while ((s1[i] == s2[i]) && (s1[i] != '\0' && s2[i] != '\0'))
		i++;
	return (s1[i] - s2[i]);
}

void	ft_putstr(char *str)
{
	int	i;

	i = 0;
	while (str[i])
	{
		ft_putchar(str[i]);
		i++;
	}
}

void	ft_swap(char **a, char **b)
{
	char	*tmp;

	tmp = *a;
	*a = *b;
	*b = tmp;
}

int		main(int argc, char **argv)
{
	int itr;

	itr = 1;
	while (itr < argc - 1)
	{
		if (ft_strcmp(argv[itr], argv[itr + 1]) > 0)
		{
			ft_swap(&argv[itr], &argv[itr + 1]);
			itr = 1;
		}
		else
			itr++;
	}
	itr = 1;
	while (itr < argc)
	{
		ft_putstr(argv[itr]);
		ft_putchar('\n');
		itr++;
	}
	return (0);
}
