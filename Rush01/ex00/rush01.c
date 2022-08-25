/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush01.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adrigonz <adrigonz@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/20 10:51:00 by adrigonz          #+#    #+#             */
/*   Updated: 2022/08/21 20:15:54 by adrigonz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdlib.h>

void	ft_initialization(int **matrix, int *vect, int rows);

void	ft_int_vector(int *vect, char *str)
{
	int	cont;
	int	pos;

	pos = 0;
	cont = 0;
	while (str[cont] != '\0')
	{
		if (str[cont] <= '9' && str[cont] >= '0')
		{
			vect[pos] = str[cont] - '0';
			pos++;
		}
		cont++;
	}
}

void	ft_schema(int **matrix, int *vect, int rows)
{
	int	count;
	int	aux;

	count = 0;
	aux = 1;
	while (aux < rows + 1)
	{
		matrix[0][aux] = vect[count];
		matrix[rows + 1][aux] = vect[count + rows];
		count++;
		aux++;
	}
	aux = 1;
	while (aux < rows + 1)
	{
		matrix[aux][0] = vect[count + rows];
		matrix[aux][rows + 1] = vect[count + rows + rows];
		count++;
		aux++;
	}
}

int	ft_length(char *argv)
{
	int	cont;
	int	numbers;

	cont = 0;
	numbers = 0;
	while (argv[cont] != '\0')
	{
		if (argv[cont] <= '9' && argv[cont] >= '1')
			numbers++;
		cont++;
	}
	return (numbers);
}

void	ft_print(int **matrix, int rows)
{
	int		f;
	int		c;
	char	pos;

	f = 1;
	while (f < rows + 1)
	{
		c = 1;
		while (c < rows + 1)
		{
			pos = matrix[f][c] + '0';
			write(1, &pos, 1);
			if (c < rows)
				write(1, " ", 1);
			c++;
		}
		f++;
		write(1, "\n", 1);
	}
}

int		ft_remain0(int **matrix, int size);

void	ft_rush01(char *argv)
{
	int	**matrix;
	int	rows;
	int	*vect;
	int	cont;

	rows = ft_length(argv) / 4;
	vect = (int *) malloc (rows * 4 * 4);
	ft_int_vector(vect, argv);
	cont = 0;
	matrix = (int **) malloc ((rows + 2) * 8);
	while (cont < rows +2)
	{
		matrix[cont] = (int *)malloc((rows + 2) * 4);
		cont++;
	}
	ft_initialization(matrix, vect, rows);
	if (!ft_remain0(matrix, rows))
		ft_print(matrix, rows);
	else
		write(1, "Error\n", 6);
}
