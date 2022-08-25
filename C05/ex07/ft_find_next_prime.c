/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_find_next_prime.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yoropeza <yoropeza@student.42malaga.c      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/16 18:17:32 by yoropeza          #+#    #+#             */
/*   Updated: 2022/08/17 19:50:58 by yoropeza         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int ft_is_prime(int nb)
{
	int	i;

    i = 2;
    if (nb == 0 || nb == 1 || nb == 4)
        return (0);

    while (i < nb / 2)
    {
        if (nb % i == 0)
            return (0);
        i++;
    }        
    return (1);
}

int ft_find_next_prime(int nb)
{	
	nb++;
	while (ft_is_prime(nb) == 0)
		nb++;
	return (nb);
}