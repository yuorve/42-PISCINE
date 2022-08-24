/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_uppercase.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yoropeza <yoropeza@student.42malaga.c      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/21 15:41:01 by yoropeza          #+#    #+#             */
/*   Updated: 2022/08/24 20:38:25 by yoropeza         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdio.h>

int	ft_str_is_uppercase(char *str)
{
	int	i;
	int	r;

	r = 1;
	i = 0;
	while (str[i] != '\0')
	{
		if (str[i] < 65 || str[i] > 90)
			r = 0;
		i++;
	}
	return (r);
}

int main(void)
{
	char c[9] = "HOLAMUNDO";

	printf("%d", ft_str_is_uppercase(c));
}
