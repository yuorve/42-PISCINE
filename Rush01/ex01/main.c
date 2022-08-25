/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yoropeza <yoropeza@student.42malaga.c      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/21 17:50:37 by yoropeza          #+#    #+#             */
/*   Updated: 2022/08/21 18:01:50 by yoropeza         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdlib.h>

void ft_ini_matrix(char **matrix, int size)
{
    int row;
    int col;
    
    row = 0;
    while (row < size)
    {
       col = 0;
       while (col < size)
       {
            matrix[row][col] = '0';
            col++;
       }
       row++;
    }
}

int ft_check_matrix(char **matrix, int size, int *pos, char num)
{
    int row;
    int col;
    int res;
    
    res = 0;
    row = 1;
    col = pos[1];
    while (row < size)
    {
        if(matrix[row][col] == num)
            res = 1;
        row++;
    }
    row = pos[0];
    col = 1;
    while (col < size)
    {
       if(matrix[row][col] == num)
            res = 1;
       col++;
    }
    return (res);
}

void ft_ini_col(char **matrix, char *parameters, int size)
{
    int col;
    
    col = 1;
    while (col < size - 1)
    {
        matrix[0][col] = parameters[col - 1];
        col++;
    }
    col = 1;
    while (col < size - 1)
    {
        matrix[size - 1][col] = parameters[col + (size - 3)];
        col++;
    }
}

void ft_ini_row(char **matrix, char *parameters, int size)
{
    int row;
    
    row = 1;
    while (row < size - 1)
    {
        matrix[row][0] = parameters[(row - 1) + ((size - 2) * 2)];
        row++;
    }
    row = 1;
    while (row < size - 1)
    {
        matrix[row][size -1] = parameters[(row - 1) + ((size - 2) * 3)];
        row++;
    }
}

void ft_print_matrix(char **matrix, int size)
{
    int row;
    int col;
    
    row = 0;
    while (row < size)
    {
       col = 0;
       while (col < size)
       {
            write(1,&matrix[row][col], 1);
            write(1, " ", 1);
            col++;
       }
       write(1, "\n", 1);
       row++;
    }
    
}

void ft_fill_row(char **matrix, int size, int row, int reverse)
{
    int col;
    
    if(reverse == 0)
    {
        col = 1;
        while (col < size - 2)
        {
            matrix[row][col] = col + '0';
            col++;
        }
    }
    else
    {
        col = size - 2;
        while (col > 0)
        {
            matrix[row][col] = size - 1 - col + '0';
            col--;
        }
    }
}

void ft_fill_col(char **matrix, int size, int col, int reverse)
{
    int row;
    
    if(reverse == 0)
    {
        row = 1;
        while (row < size - 2)
        {
            matrix[row][col] = row + '0';
            row++;
        }
    }
    else
    {
        row = size - 2;
        while (row > 0)
        {
            matrix[row][col] = size - 1 - row + '0';
            row--;
        }
    }
}

void ft_leftup_one(char **matrix, int size)
{
    int row;
    int col;
    
    row = 0;
    while (row < size)
    {
        if(matrix[row][0] == '1')
            matrix[row][1] = '4';
        row++;
    }
    col = 1;
    while (col < size)
    {
        if(matrix[0][col] == '1')
            matrix[1][col] = '4';
        col++;
    }
}

void ft_rightdown_one(char **matrix, int size)
{
    int row;
    int col;
    
    row = 0;
    while (row < size)
    {
        if(matrix[row][size -1] == '1')
            matrix[row][size - 2] = '4';
        row++;
    }
    col = 1;
    while (col < size)
    {
        if(matrix[size - 1][col] == '1')
            matrix[size - 2][col] = '4';
        col++;
    }
}

void ft_leftup_two(char **matrix, int size)
{
    int row;
    int col;
    int pos[2];
    
    row = 0;
    while (row < size)
    {
        if(matrix[row][0] == '2')
        {
            pos[0] = row;
            pos[1] = 2;
            if(ft_check_matrix(matrix, size, pos, '4') == 0)
                matrix[row][2] = '4';
        }
        row++;
    }
    col = 1;
    while (col < size)
    {
        if(matrix[0][col] == '2')
        {
            pos[0] = 2;
            pos[1] = col;
            if(ft_check_matrix(matrix, size, pos, '4') == 0)
                matrix[2][col] = '4';
        }
        col++;
    }
}

void ft_rightdown_two(char **matrix, int size)
{
    int row;
    int col;
    int pos[2];
    
    row = 0;
    while (row < size)
    {
        if(matrix[row][size -1] == '2')
        {
            pos[0] = row;
            pos[1] = size - 3;
            if(ft_check_matrix(matrix, size, pos, '4') == 0)
                matrix[row][size - 3] = '4';
        }
        row++;
    }
    col = 1;
    while (col < size)
    {
        if(matrix[size - 1][col] == '2')
        {
            pos[0] = size - 3;
            pos[1] = col;
            if(ft_check_matrix(matrix, size, pos, '4') == 0)
                matrix[size - 3][col] = '4';
        }
        col++;
    }
}

void ft_leftup_three(char **matrix, int size)
{
    int row;
    int col;
    
    row = 0;
    while (row < size)
    {
        if(matrix[row][0] == '3' && matrix[row][size - 1] == '2')
            matrix[row][3] = '4';
        row++;
    }
    col = 1;
    while (col < size)
    {
        if(matrix[0][col] == '3' && matrix[size - 1][col] == '2')
            matrix[3][col] = '4';
        col++;
    }
}

void ft_rightdown_three(char **matrix, int size)
{
    int row;
    int col;
    
    row = 0;
    while (row < size)
    {
        if(matrix[row][size - 1] == '3' && matrix[row][0] == '2')
            matrix[row][size - 4] = '4';
        row++;
    }
    col = 1;
    while (col < size)
    {
        if(matrix[size - 1][col] == '3' && matrix[0][col] == '2')
            matrix[size - 4][col] = '4';
        col++;
    }
}

void ft_leftup_four(char **matrix, int size)
{
    int row;
    int col;
    
    row = 0;
    while (row < size)
    {
        if(matrix[row][0] == '4')
            ft_fill_row(matrix, size, row, 0);
        row++;
    }
    col = 1;
    while (col < size)
    {
        if(matrix[0][col] == '4')
            ft_fill_col(matrix, size, col, 0);
        col++;
    }
}

void ft_rightdown_four(char **matrix, int size)
{
    int row;
    int col;
    
    row = 0;
    while (row < size)
    {
        if(matrix[row][size -1] == '4')
            ft_fill_row(matrix, size, row, 1);
        row++;
    }
    col = 1;
    while (col < size)
    {
        if(matrix[size - 1][col] == '4')
           ft_fill_col(matrix, size, col, 1); 
        col++;
    }
}

void ft_fill_IA(char **matrix, int size, int row, int col)
{
    int num;
    int pos[2];
	int r;
    
    pos[0]=row;
    pos[1]=col;
    num = '1';
    if(matrix[row][col + 1] == '4' && col != size - 1)
        num = matrix[row][col + 1] - 1;
    if(matrix[row][col - 1] == '4' && col == 0)
        num = matrix[row][col - 1] - 1;
	r = 0;
    while((ft_check_matrix(matrix, size, pos, num) == 1) && (r < 5))
	{
		num++;
		if(num > '4')
			num = '1';
		r++;
	}
	if(r > 4)
		num = '0';
    matrix[row][col] = num;
}

void ft_find_zeros(char **matrix, int size)
{
    int row;
    int col;
    
    row = 1;
    while (row < size - 1)
    {
       col = 1;
       while (col < size - 1)
       {
            if(matrix[row][col] == '0')
                ft_fill_IA(matrix, size, row, col);
            col++;
       }
       row++;
    }
}

int	main(int argc, char **argv)
{
 /*char parameters[16] = "4321122243211222";*/
 char parameters[16] = "2123232122143231";
 char **matrix;
 int size = 6;
 int col;

 
 col = 0;
 matrix = (char **)malloc (size * size);
 while (col < size)
 {
    matrix[col] = (char *)malloc (size);
    col++;
 }

 ft_ini_matrix(matrix, size);
 ft_ini_col(matrix, parameters, size);
 ft_ini_row(matrix, parameters, size);
 ft_leftup_one(matrix, size);
 ft_rightdown_one(matrix, size);
 ft_leftup_four(matrix, size);
 ft_rightdown_four(matrix, size);
 ft_leftup_two(matrix, size);
 ft_rightdown_two(matrix, size);
 ft_leftup_three(matrix, size);
 ft_rightdown_three(matrix, size);
 ft_find_zeros(matrix, size);
 ft_print_matrix(matrix, size);
}
