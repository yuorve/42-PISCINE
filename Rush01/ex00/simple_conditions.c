/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   simple_conditions.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adrigonz <adrigonz@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/20 13:48:00 by adrigonz          #+#    #+#             */
/*   Updated: 2022/08/21 20:16:43 by adrigonz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_check_tam(int **matrix, int rows, int col, int size)
{
	int	b;
	int	cont;

	cont = 1;
	b = 1;
	while (cont < size +1 && b == 1)
	{
		if (matrix[cont][col] == size)
			b = 0;
		cont++;
	}
	cont = 1;
	while (cont < size +1 && b == 1)
	{
		if (matrix[rows][cont] == size)
			b = 0;
		cont++;
	}
	return (b);
}

void	ft_hor(int **matrix, int row, int col, int size)
{
	int	cont;

	if (matrix[row][col] == 1)
		matrix[1][col] = size;
	else if (matrix[row][col] == size)
	{
		cont = 1;
		while (cont < size + 1)
		{
			matrix[cont][col] = cont;
			cont++;
		}
	}
	else
	{
		if (ft_check_tam(matrix, size - 1, col, size))
			matrix[size - 1][col] = size;
	}
}

void	ft_hor_ult(int **matrix, int row, int col, int size)
{
	int	cont;

	if (matrix[row][col] == 1)
		matrix[size][col] = size;
	else if (matrix[row][col] == size)
	{
		cont = size;
		while (cont > 0)
		{
			matrix[cont][col] = size + 1 - cont;
			cont--;
		}
	}
	else
	{
		if (ft_check_tam(matrix, 2, col, size))
			matrix[2][col] = size;
	}
}

void	ft_ver(int **matrix, int row, int col, int size)
{
	int	cont;

	if (matrix[row][col] == 1)
		matrix[row][1] = size;
	else if (matrix[row][col] == size)
	{
		cont = 1;
		while (cont < size + 1)
		{
			matrix[row][cont] = cont;
			cont++;
		}
	}
	else
	{
		if (ft_check_tam(matrix, row, size - 1, size))
			matrix[row][size - 1] = size;
	}
}

void	ft_ver_ult(int **matrix, int row, int col, int size)
{
	int	cont;

	if (matrix[row][col] == 1)
		matrix[row][size] = size;
	else if (matrix[row][col] == size)
	{
		cont = size - 1;
		while (cont > 0)
		{
			matrix[row][cont] = size + 1 - cont;
			cont--;
		}
	}
	else
	{
		if (ft_check_tam(matrix, row, 2, size))
			matrix[row][2] = size;
	}
}
