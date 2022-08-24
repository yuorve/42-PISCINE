/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yoropeza <yoropeza@student.42malaga.c      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/22 20:08:02 by yoropeza          #+#    #+#             */
/*   Updated: 2022/08/23 20:02:03 by yoropeza         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

char	*ft_strncat(char *dest, char *src, unsigned int nb);

int	main(void)
{
	char	*str;

	str = "Hola ";
	str = ft_strncat(str, "mundo cruel!", 5);
	printf("La cadena es: %s", str);
	return (0);
}
