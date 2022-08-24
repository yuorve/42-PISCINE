/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yoropeza <yoropeza@student.42malaga.c      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/21 16:21:09 by yoropeza          #+#    #+#             */
/*   Updated: 2022/08/24 19:12:38 by yoropeza         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

unsigned int	ft_strlcpy(char *dest, char *scr, unsigned int n)
{
	unsigned int	i;

	i = 0;
	while (dest[i] && i < n)
	{
		dest[i] = scr[i];
		i++;
	}
	dest[i] = '\0';
	return (i);
}
