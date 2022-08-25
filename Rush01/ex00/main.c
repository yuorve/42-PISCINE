/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adrigonz <adrigonz@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/20 10:36:00 by adrigonz          #+#    #+#             */
/*   Updated: 2022/08/21 20:29:59 by adrigonz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	ft_check_argv(char *argv)
{
	int	cont;
	int	numbers;
	int	res;

	res = 0;
	cont = 0;
	numbers = 0;
	while (argv[cont] != '\0')
	{
		if (argv[cont] <= '9' && argv[cont] >= '1')
			numbers++;
		else if (argv[cont] != ' ')
			numbers = -99;
		cont++;
	}
	if (numbers % 4 != 0 || numbers < 0)
		res = 1;
	return (res);
}

void	ft_rush01(char *argv);

int		ft_checkingvalues(char *argv);

int	main(int argc, char **argv)
{
	int	b;

	b = 0;
	if (argc == 2)
	{
		b = ft_check_argv(argv[1]);
		b += ft_checkingvalues(argv[1]);
		if (b == 0 && argc == 2)
		{
			ft_rush01(argv[1]);
		}
		else
			write(1, "Error\n", 6);
	}
	else
		write(1, "Error\n", 6);
	return (b);
}
