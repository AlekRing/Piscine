/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_params.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: emargare <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/03/11 09:30:13 by emargare          #+#    #+#             */
/*   Updated: 2020/03/11 17:50:24 by emargare         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putchar(char c);

int		main(int argc, char **argv)
{
	int itr;
	int i;

	itr = 1;
	if (argc > 1)
	{
		while (argv[itr])
		{
			i = 0;
			while (argv[itr][i])
			{
				ft_putchar(argv[itr][i]);
				i++;
			}
			ft_putchar('\n');
			itr++;
		}
	}
	return (0);
}
