/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yoropeza <yoropeza@student.42malaga.c      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/22 20:07:33 by yoropeza          #+#    #+#             */
/*   Updated: 2022/08/23 20:05:15 by yoropeza         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	ft_strncmp(char *s1, char *s2, unsigned int n);

int	main(void)
{
	int		r;
	char	c;

	r = ft_strncmp("hola", "holas", 3);
	if (r < 0)
	{
		write(1, "-", 1);
		r = -r;
	}
	c = r + '0';
	write(1, &c, 1);
	return (0);
}
