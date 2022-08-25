/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yoropeza <yoropeza@student.42malaga.c      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/16 18:17:32 by yoropeza          #+#    #+#             */
/*   Updated: 2022/08/17 19:50:58 by yoropeza         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		i++;
	}
	return (i);
}

char	*ft_strcpy(char *dest, char *scr)
{
	int	i;	

	i = 0;
	while (scr[i] != '\0')
	{
		dest[i] = scr[i];
		i++;
	}
	dest = scr;
	return (dest);
}

char *ft_strjoin(int size, char **strs, char *sep)
{
	int		i;
	int		len;
	char	*tab;

    if (size == 0)
    {
        tab = (char*)malloc(1);
        return (tab);
    }
	len = 0;
    while (i < size)
    {
        len += ft_strlen(strs[i]);
        i++;
    }
	tab = (char *)malloc(sizeof(char) * len + 1);
	i = 0;
	while(i < size)
	{
		tab = ft_strcpy(tab, strs[i]);
		i++;
		if (i != size)
			tab = ft_strcpy(tab, sep);
	}
	tab[i] = '\0';
	return (tab);
}