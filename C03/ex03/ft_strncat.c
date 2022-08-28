/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yoropeza <yoropeza@student.42malaga.c      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/22 20:08:02 by yoropeza          #+#    #+#             */
/*   Updated: 2022/08/27 15:12:08 by yoropeza         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdio.h>
#include <string.h>

char	*ft_strncat(char *dest, char *src, unsigned int nb)
{
	unsigned int	i;
	unsigned int	j;

	i = 0;
	while (dest[i])
		i++;
	j = 0;
	while (src[j] && j < nb)
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
		mine = ft_strncat(argc[1], argc[2], 5);
		theirs = strncat(argc[1], argc[2], 5);
		printf(":%s:\n:%s:\n", mine, theirs);
	}
	return (0);
}
