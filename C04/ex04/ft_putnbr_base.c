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
		}
	}
	return (0);
}

int	ft_check_base(char *base)
{
	int	len;

	len = 0;
	while (*base++)
		len++;
	if (ft_dup_char(base) == 1)
		return (0);
	if (base[0] == '\0' || base[1] == '\0')
		return (0);
	while (*base++)
		if (*base == '-' || *base == '+')
			return (0);
	return (len);
}

void	ft_putnbr_base(int nbr, char *base)
{
	int	size_base;

	size_base = ft_check_base(base);
	if (size_base == 0)
	{
		write(1, '\0', 1);
	}
	else if (nbr == -2147483648)
	{
		ft_putnbr_base(214748364 / size_base, base);
		ft_putnbr_base(8 / size_base, base);
	}
	else if (nbr < 0)
	{
		write(1, "-", 1);
		nbr = -nbr;
	}
	else if (nbr >= 10)
	{
		ft_putnbr_base(nbr / size_base, base);
		ft_putnbr_base(nbr % size_base, base);
	}
	else if (nbr < 10)
		ft_putchar(nbr, base);
}
