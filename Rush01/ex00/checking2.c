/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   checking2.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adrigonz <adrigonz@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/21 13:34:07 by adrigonz          #+#    #+#             */
/*   Updated: 2022/08/21 20:16:25 by adrigonz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_length(char *argv);

int	ft_checkfullrow(int **matrix, int *pos, int size)
{
	int	i;
	int	b;

	b = 1;
	i = 1;
	while (i < size + 1 && b == 1)
	{
		if (matrix[pos[0]][i] == 0)
			b = 0;
		i++;
	}
	return (b);
}

int	ft_checkfullcol(int **matrix, int *pos, int size)
{
	int	i;
	int	b;

	b = 1;
	i = 1;
	while (i < size + 1 && b == 1)
	{
		if (matrix[i][pos[1]] == 0)
			b = 0;
		i++;
	}
	return (b);
}

int	ft_remain0(int **matrix, int size)
{
	int	f;
	int	c;

	f = 1;
	c = 1;
	while (f < size +1)
	{
		while (c < size + 1)
		{
			if (matrix[f][c] == 0)
				return (1);
			c++;
		}
		f++;
		c = 1;
	}
	return (0);
}

int	ft_checkingvalues(char *argv)
{
	int	n;
	int	cont;
	int	b;

	b = 0;
	cont = 0;
	n = ft_length(argv) / 4;
	while (argv[cont] != '\0' && b == 0)
	{
		if ((argv[cont] > (n + '0') || argv[cont] <= ('0'))
			&& argv[cont] != ' ')
			b = 1;
		cont++;
	}
	return (b);
}
