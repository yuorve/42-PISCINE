/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_combn.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yoropeza <yoropeza@student.42malaga.c      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/15 16:44:58 by yoropeza          #+#    #+#             */
/*   Updated: 2022/08/17 19:23:45 by yoropeza         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_print_num(int nb)
{
	char	c;

	if (nb > 9)
	{
		ft_print_num(nb / 10);
		nb = nb % 10;
	}
	if (nb < 10)
	{
		c = nb + 48;
		write(1, &c, 1);
	}
}

int	ft_num_pow(int num, int n)
{
	if (n <= 0)
		return (1);
	else
		return (num * ft_num_pow (num, n - 1));
}

int	ft_check_num(int nb, int n)
{
	int		i;
	int		f;
	char	c[10];

	f = 0;
	i = 0;
	while (i < n)
	{
		c[i] = (nb / ft_num_pow (10, ((n - 1) - i)));
		nb -= (c[i] * ft_num_pow (10, ((n - 1) - i)));
		i++;
	}
	i = 0;
	while (i < n)
	{
		if (i < (n -1))
		{
			if (c[i] >= c[i + 1])
				f = 1;
		}
		i++;
	}
	return (f);
}

int	ft_nmax(int n)
{
	int	j;
	int	max;

	j = 1;
	max = 0;
	while (j < n)
	{
		max += ((n - j) * ft_num_pow (10, (n - j)));
		j++;
	}
	max = (ft_num_pow (10, n) - 1) - max;
	return (max);
}

void	ft_print_combn(int n)
{
	int	i;
	int	nmax;

	if (n > 0 && n < 10)
	{
		nmax = ft_nmax(n);
		i = 0;
		while (i <= nmax)
		{
			if (ft_check_num(i, n) == 0)
			{
				if ((i < ft_num_pow (10, (n - 1))) && n > 1)
					write(1, "0", 1);
				ft_print_num(i);
				if (i < nmax)
					write (1, ", ", 2);
			}
			i++;
		}
	}
}

int	main(void)
{
	int i;

	i = 1;
	while (i < 10)
	{
		ft_print_combn(i);
		write(1, "\n", 1);
		i++;
	}
}
