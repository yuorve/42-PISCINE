/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcat.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yoropeza <yoropeza@student.42malaga.c      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/22 20:07:46 by yoropeza          #+#    #+#             */
/*   Updated: 2022/08/23 20:03:29 by yoropeza         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>

char	*ft_strcat(char *dest, char *src)
{
	int	i;
	int	j;

	i = 0;
	while (dest[i])
		i++;
	j = 0;
	while (src[j])
	{
		dest[i + j] = src[j];
		j++;
	}
	dest[i + j] = '\0';
	return (dest);
}

int main(int argv, char **argc)
{
	char *mine;
	char *theirs;

	if (argv == 3)
	{
		mine = ft_strcat(argc[1], argc[2]);
		theirs = strcat(argc[1], argc[2]);
		printf("Mi resultado: %s, El suyo: %s", mine, theirs);
	}
	return (0);
}