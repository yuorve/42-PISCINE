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

#include <string.h>
#include <stdio.h>

char	*ft_strstr(char *str, char *to_find)
{
	int	i;
	int	j;

	i = 0;
	j = 0;
	if (to_find[0] == '\0')
		return (str);
	while (*str++)
	{
		while (str[i + j] && str[i + j] == to_find[j])
		{
			j++;
			if (to_find[j] == '\0')
				return (str);
		}
		i++;
	}
	return ('\0');
}

int main(int argv, char **argc)
{
	char *mine;
	char *theirs;

	if (argv == 3)
	{
		mine = ft_strstr(argc[1], argc[2]);
		theirs = strstr(argc[1], argc[2]);
		printf(":%s:\n:%s:\n", mine, theirs);
	}
	return (0);
}