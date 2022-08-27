/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcapitalize.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yoropeza <yoropeza@student.42malaga.c      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/21 16:15:09 by yoropeza          #+#    #+#             */
/*   Updated: 2022/08/27 14:47:10 by yoropeza         ###   ########.fr       */
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
	if (str[0] > 96 && str[0] < 123)
		str[0] = str[0] - 32;
	i = 1;
	while (str[i] != '\0')
	{
		if (str[i] > 96 && str[i] < 123)
			if (str[i - 1] < 48 || str[i - 1] > 122
				|| (str[i] > 57 && str[i] < 97))
				str[i] = str[i] - 32;
		i++;
	}
	return (str);
}
