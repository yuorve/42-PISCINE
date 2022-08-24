/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_int_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yoropeza <yoropeza@student.42malaga.c      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/17 19:43:04 by yoropeza          #+#    #+#             */
/*   Updated: 2022/08/19 22:02:46 by yoropeza         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_rev_int_tab(int *tab, int size)
{
	int	i;
	int	x;

	i = 0;
	while (i < size / 2)
	{
		x = tab[i];
		tab[i] = tab[size - i - 1];
		tab[size - i - 1] = x;
		i++;
	}
}
