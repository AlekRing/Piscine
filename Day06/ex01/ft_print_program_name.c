/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_program_name.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: emargare <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/03/10 22:04:38 by emargare          #+#    #+#             */
/*   Updated: 2020/03/11 17:50:46 by emargare         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putchar(char c);

int		main(int argc, char *argv[])
{
	int itr;

	argc = 1;
	itr = 0;
	while (argv[0][itr] != '\0')
	{
		ft_putchar(argv[0][itr]);
		itr++;
	}
	ft_putchar('\n');
	return (0);
}
