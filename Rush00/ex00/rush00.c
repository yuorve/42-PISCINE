/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush00.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yoropeza <yoropeza@student.42malaga.c      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/13 12:59:26 by yoropeza          #+#    #+#             */
/*   Updated: 2022/08/13 13:22:37 by yoropeza         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putchar(char c);

void	draw(int r, int c, int x, int y)
{
	if ((r == 1 && c == 1) || (r == y && c == x)
		|| (r == 1 && c == x) || (r == y && c == 1))
	{
		ft_putchar('o');
	}
	else if (c == 1 || c == x)
	{
		ft_putchar('|');
	}
	else if (r == 1 || r == y)
	{
		ft_putchar('-');
	}
	else
	{
		ft_putchar(' ');
	}
}

void	rush(int x, int y)
{
	int	r;
	int	c;

	r = 1;
	while (r <= y)
	{
		c = 1;
		while (c <= x)
		{
			draw(r, c, x, y);
			c++;
		}
		ft_putchar('\n');
		r++;
	}
}
