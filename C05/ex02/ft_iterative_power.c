/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yoropeza <yoropeza@student.42malaga.c      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/16 18:17:32 by yoropeza          #+#    #+#             */
/*   Updated: 2022/08/17 19:50:58 by yoropeza         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_iterative_power(int nb, int power)
{
	int	r;

	r = nb;
	if (power < 0)
		return (0);
	if (power == 0)
		return (1);
	if (nb == 0 && power == 0)
		return (1);
	while (power > 1)
	{
		r = r * nb;
		power--;
	}
	return (r);
}
