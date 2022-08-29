/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_params.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yoropeza <yoropeza@student.42malaga.c      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/16 18:17:32 by yoropeza          #+#    #+#             */
/*   Updated: 2022/08/17 19:50:58 by yoropeza         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putstr(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		write(1, &str[i], 1);
		i++;
	}
}

int	ft_strcmp(char *s1, char *s2)
{
	int	i;

	i = 0;
	while (s1[i] || s2[i])
	{
		if (s1[i] != s2[i])
			return (s1[i] - s2[i]);
		i++;
	}
	return (0);
}

void	ft_sort_params(int nb, char **params)
{
	int		i;
	char	*swap;

	i = 1;
	while (i < nb)
	{
		if (ft_strcmp(params[i], params[i + 1]) > 0)
		{
			swap = params[i + 1];
			params[i + 1] = params[i];
			params[i] = swap;
			i = 0;
		}
		i++;
	}
}

int	main(int argv, char **argc)
{
	int	i;
	
	ft_sort_params((argv - 1), argc);
	i = 1;
	while (i < argv)
	{
		ft_putstr(argc[i]);
		write(1, "\n", 1);
		i++;
	}
}
