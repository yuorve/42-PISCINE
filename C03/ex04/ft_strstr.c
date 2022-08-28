/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yoropeza <yoropeza@student.42malaga.c      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/22 20:08:21 by yoropeza          #+#    #+#             */
/*   Updated: 2022/08/27 15:12:57 by yoropeza         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strstr(char *str, char *to_find)
{
	int    i;
	int    j;
	
	i = 0;
	if (to_find[0] == '\0')
		return (str);
	while (str[i] != '\0')
	{
		j = 0;
		while (to_find[j] != '\0')
			if (str[i + j] == to_find[j])
				j++;
			else
				break;		
		if (to_find[j] == '\0')
			return (str + i);
		i++;
	}
	return ('\0');
}
