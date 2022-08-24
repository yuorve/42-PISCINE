/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcapitalize.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yoropeza <yoropeza@student.42malaga.c      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/21 16:15:09 by yoropeza          #+#    #+#             */
/*   Updated: 2022/08/24 18:21:21 by yoropeza         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strcapitalize(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if (str[i] > 64 && str[i] < 91)
			str[i] = str[i] + 32;
		i++;
	}
	i = 0;
	while (str[i] != '\0')
	{
		if (str[i] == 32 || str[i] == 45 || str[i] == 43)
			if (str[i + 1] > 96 && str[i + 1] < 123)
				str[i + 1] = str[i + 1] + 32;
		i++;
	}
	return (str);
}
