/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_params.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: emargare <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/03/11 15:43:49 by emargare          #+#    #+#             */
/*   Updated: 2020/03/11 17:49:56 by emargare         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putchar(char c);

int		main(int argc, char *argv[])
{
	int itr;
	int i;

	itr = 0;
	if (argc > 1)
	{
		while (argv[itr])
			itr++;
		i = itr - 1;
		while (i > 0)
		{
			itr = 0;
			while (argv[i][itr])
			{
				ft_putchar(argv[i][itr]);
				itr++;
			}
			i--;
			ft_putchar('\n');
		}
	}
	return (0);
}
