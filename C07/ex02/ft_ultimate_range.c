/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_range.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yoropeza <yoropeza@student.42malaga.c      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/16 18:17:32 by yoropeza          #+#    #+#             */
/*   Updated: 2022/08/17 19:50:58 by yoropeza         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int ft_ultimate_range(int **range, int min, int max)
{    
    int i;

	if (min >= max)
    {
        *range = 0;
        return (0);
    }
    if (!(*range = (int *)malloc(sizeof(int) * (max - min))))
        return (-1);
    i = 0;
	while (min < max)
	{
		(*range)[i] = min;
		min++;
		i++;        
	}
	return (i);
}