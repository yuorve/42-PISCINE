/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   checking.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adrigonz <adrigonz@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/21 12:34:07 by adrigonz          #+#    #+#             */
/*   Updated: 2022/08/21 20:16:16 by adrigonz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_checkfullrow(int **matrix, int *pos, int size);

int	ft_checkfullcol(int **matrix, int *pos, int size);

int	ft_checkrowleft(int **matrix, int *pos, int size)
{
	int	i;
	int	sum;
	int	last;

	sum = 1;
	i = 0;
	last = matrix[pos[0]][1];
	while (i < size + 1)
	{
		i++;
		if (last < matrix[pos[0]][i])
		{
			sum++;
			last = matrix[pos[0]][i];
		}
	}
	if (sum != matrix[pos[0]][0])
		return (0);
	else
		return (1);
}

int	ft_checkrowright(int **matrix, int *pos, int size)
{
	int	i;
	int	sum;
	int	last;

	sum = 1;
	i = size + 1;
	last = matrix[pos[0]][size];
	while (i > 0)
	{
		i--;
		if (last < matrix[pos[0]][i])
		{
			sum++;
			last = matrix[pos[0]][i];
		}
	}
	if (sum != matrix[pos[0]][size + 1])
		return (0);
	else
		return (1);
}

int	ft_checkcolup(int **matrix, int *pos, int size)
{
	int	i;
	int	sum;
	int	last;

	sum = 1;
	i = 0;
	last = matrix[1][pos[1]];
	while (i < size + 1)
	{
		i++;
		if (last < matrix[i][pos[1]])
		{
			sum++;
			last = matrix[i][pos[1]];
		}
	}
	if (sum != matrix[0][pos[1]])
		return (0);
	else
		return (1);
}

int	ft_checkcoldown(int **matrix, int *pos, int size)
{
	int	i;
	int	sum;
	int	last;

	sum = 1;
	i = size + 1;
	last = matrix[size][pos[1]];
	while (i > 0)
	{
		i--;
		if (last < matrix[i][pos[1]])
		{
			sum++;
			last = matrix[i][pos[1]];
		}
	}
	if (sum != matrix[size + 1][pos[1]])
		return (0);
	else
		return (1);
}

int	ft_checkingall(int **matrix, int *pos, int size)
{
	int	b;

	b = 1;
	if (ft_checkfullrow(matrix, pos, size))
	{
		if (!ft_checkrowleft(matrix, pos, size)
			|| !ft_checkrowright(matrix, pos, size))
			b = 0;
	}
	if (ft_checkfullcol(matrix, pos, size))
	{
		if (!ft_checkcolup(matrix, pos, size)
			|| !ft_checkcoldown(matrix, pos, size))
			b = 0;
	}
	return (b);
}
