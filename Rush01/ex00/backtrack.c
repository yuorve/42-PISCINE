/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   backtrack.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adrigonz <adrigonz@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/20 18:20:58 by adrigonz          #+#    #+#             */
/*   Updated: 2022/08/21 20:16:00 by adrigonz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int		ft_checkingall(int **matrix, int *pos, int size);

void	ft_back(int **matrix, int size);

int		ft_remain0(int **matrix, int size);

int	ft_checknum(int **matrix, int *pos, int size, int num)
{
	int	b;
	int	cont;

	cont = 1;
	b = 1;
	while (cont < size +1 && b == 1)
	{
		if (matrix[cont][pos[1]] == num)
			b = 0;
		cont++;
	}
	cont = 1;
	while (cont < size +1 && b == 1)
	{
		if (matrix[pos[0]][cont] == num)
			b = 0;
		cont++;
	}
	return (b);
}

void	ft_insertnum(int **matrix, int row, int col, int size)
{
	int	cont;
	int	*pos;
	int	b;

	b = 1;
	pos = (int *) malloc (2 * 4);
	pos[0] = row;
	pos[1] = col;
	cont = 1;
	while (cont <= size && b == 1)
	{
		if (ft_checknum(matrix, pos, size, cont))
		{
			matrix[row][col] = cont;
			if (ft_checkingall(matrix, pos, size))
				ft_back(matrix, size);
			else
				matrix[row][col] = 0;
		}
		cont++;
	}
	if (ft_remain0(matrix, size))
		matrix[row][col] = 0;
}

void	ft_back(int **matrix, int size)
{
	int	row;
	int	col;
	int	find;

	find = 1;
	row = 1;
	while (row < size + 1 && find == 1)
	{
		col = 1;
		while (col < size + 1 && find == 1)
		{
			if (matrix[row][col] == 0)
			{
				find = 0;
				ft_insertnum(matrix, row, col, size);
			}
			col++;
		}
		row++;
	}
}
