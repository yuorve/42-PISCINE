/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yoropeza <yoropeza@student.42malaga.c      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/16 18:17:32 by yoropeza          #+#    #+#             */
/*   Updated: 2022/08/17 19:50:58 by yoropeza         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (*str++)
		i++;
	return (i);
}

char *ft_strdup(char *src)
{
	char	*tab;
	int		i;

	i = 0;
	if (!(tab = (char*)malloc(sizeof(char) * (ft_strlen(src) + 1))))
		return NULL;
	while (*src)
		tab[i++] = *src++;
	tab[i] = '\0';
	return (tab);
}

int main(int argv, char **argc)
{
	char *mine;
	char *theirs;

	if (argv == 2)
	{
		mine = ft_strdup(argc[1]);
		theirs = strdup(argc[1]);
		printf("Resultado mio   :%s:\nResultado ellos :%s:\n", mine, theirs);
	}
	return (0);
}