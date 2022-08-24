/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_negative.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yoropeza <yoropeza@student.42malaga.c      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/14 18:06:10 by yoropeza          #+#    #+#             */
/*   Updated: 2022/08/17 17:14:31 by yoropeza         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_is_negative(int n)
{
	char	c;
	char	d;

	c = 'N';
	d = 'P';
	if (n < 0)
		write(1, &c, 1);
	else
		write(1, &d, 1);
}

/*int	main(void)
{
	ft_is_negative(-245);
}*/
