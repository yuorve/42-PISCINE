/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_base.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yoropeza <yoropeza@student.42malaga.c      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/28 18:17:32 by yoropeza          #+#    #+#             */
/*   Updated: 2022/08/28 19:50:58 by yoropeza         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(int n, char *base)
{
	write(1, &base[n], 1);
}

int	ft_dup_char(char *base)
{
	int	i;
	int	j;

	i = 0;
	while (base[i] != '\0')
	{
		j = 0;
		while (base[j] != '\0')
		{
			if (j != i && base[j] == base[i])
				return (1);
			j++;
		}
		i++;
	}
	return (0);
}

int	ft_check_base(char *base)
{
	int	i;
	
	i = 0;
	if (ft_dup_char(base) == 1)
		return (0);
	if (base[0] == '\0' || base[1] == '\0')
		return (0);
	while (base[i])
	{
		if (base[i] == '-' || base[i] == '+')
			return (0);
		i++;
	}
	return (i);
}

int	ft_atoi_base(char *str, char *base)
{
	int	number;
	int	negative;
	int	size_base;

	size_base = ft_check_base(base);
	if ((size_base) == 0)
		return (0);
	else
	{
		number = 0;
		negative = 1;
		while (*str == 32 || (*str >= 9 && *str <= 13))
			str++;
		while (*str == '-' || *str == '+')
		{
			if (*str == '-')
				negative *= -1;
			str++;
		}
		while (*str++ && *str <= '9')
			number += (number * size_base) + base[(str[i] - '0')];
		return (number * negative);
	}
}
