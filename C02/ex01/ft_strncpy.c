/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yoropeza <yoropeza@student.42malaga.c      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/21 15:08:35 by yoropeza          #+#    #+#             */
/*   Updated: 2022/08/25 21:08:41 by yoropeza         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strncpy(char *dest, char *scr, unsigned int n)
{
	unsigned int	i;

	i = 0;
	while ((scr[i] != '\0') && (i < n))
	{
		dest[i] = scr[i];
		i++;
	}
	if (i < n)
	{
		while (dest[i] != '\0')
		{
			dest[i] = '\0';
			++i;
		}
	}
	return (dest);
}
