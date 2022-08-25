/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   initialization.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adrigonz <adrigonz@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/21 19:39:50 by adrigonz          #+#    #+#             */
/*   Updated: 2022/08/21 19:51:58 by adrigonz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_schema(int **matrix, int *vect, int rows);

void	ft_back(int **matrix, int size);

void	ft_hor(int **matrix, int row, int col, int size);

void	ft_hor_ult(int **matrix, int row, int col, int size);

void	ft_ver(int **matrix, int row, int col, int size);

void	ft_ver_ult(int **matrix, int row, int col, int size);

void	ft_fills1(int **matrix, int size)
{
	int	f;
	int	c;

	f = 0;
	while (f < size + 2)
	{
		c = 0;
		while (c < size + 2)
		{
			if (f == 0 && (matrix[f][c] == size || matrix[f][c] == 1))
				ft_hor(matrix, f, c, size);
			else if (f == size + 1 && (matrix[f][c] == size
				|| matrix[f][c] == 1))
				ft_hor_ult(matrix, f, c, size);
			else if (c == 0 && (matrix[f][c] == size || matrix[f][c] == 1))
				ft_ver(matrix, f, c, size);
			else if (c == size + 1 && (matrix[f][c] == size
				|| matrix[f][c] == 1))
				ft_ver_ult(matrix, f, c, size);
			c++;
		}
		f++;
	}
}

void	ft_fills_1(int **matrix, int size)
{
	int	f;
	int	c;

	f = 0;
	while (f < size + 2)
	{
		c = 0;
		while (c < size + 2)
		{
			if (f == 0 && (matrix[f][c] == size - 1))
				ft_hor(matrix, f, c, size);
			else if (f == size + 1 && (matrix[f][c] == size - 1))
				ft_hor_ult(matrix, f, c, size);
			else if (c == 0 && (matrix[f][c] == size - 1))
				ft_ver(matrix, f, c, size);
			else if (c == size + 1 && (matrix[f][c] == size - 1))
				ft_ver_ult(matrix, f, c, size);
			c++;
		}
		f++;
	}
}

void	ft_initialization(int **matrix, int *vect, int rows)
{
	ft_schema(matrix, vect, rows);
	ft_fills1(matrix, rows);
	ft_fills_1(matrix, rows);
	ft_back(matrix, rows);
}
