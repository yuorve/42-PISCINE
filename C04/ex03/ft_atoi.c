/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yoropeza <yoropeza@student.42malaga.c      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/16 18:17:32 by yoropeza          #+#    #+#             */
/*   Updated: 2022/08/17 19:50:58 by yoropeza         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int ft_atoi(char *str)
{
	int	i;
	int	number;
	int	negative;

	i = 0;
	number = 0;
	negative = 1;
	while (str[i])
	{
		if (str[i] >= '0' && str[i] <= '9')
		{
			number = number * 10 + (str[i] - '0');
		}
		else if (str[i] == '-')
			negative = -negative;
		else if (str[i] == '+')
			negative = +negative;
		else if (!((str[i] >= 9 && str[i] <= 13) || str[i] == 32))
			return (negative * number);
		i++;
	}
	return (negative * number);
}
