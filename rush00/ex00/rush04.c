/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush04.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jpaulo-b <jpaulo-b@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/23 12:06:59 by jpaulo-b          #+#    #+#             */
/*   Updated: 2025/02/23 19:06:50 by jpaulo-b         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char ltr);

void	ft_print(int x, int y, int c, int l);

/* c -- column counter -x */
/* l -- line counter -y */
int	rush04(int x, int y)
{
	int	c;
	int	l;

	if (x <= 0 || y <= 0)
		write(1, "error\n", 6);
	else
	{
		l = 1;
		while (l <= y)
		{
			c = 1;
			while (c <= x)
			{
				ft_print(x, y, c, l);
				c++;
			}
			ft_putchar('\n');
			l++;
		}
	}
	return (0);
}

void	ft_print(int x, int y, int c, int l)
{
	char	ltr;

	if ((c == 1 && l == 1) || (c == x && l == y))
		ltr = 'A';
	else if ((c == x && l == 1) || (c == 1 && l == y))
		ltr = 'C';
	else if (l != 1 && l != y && c != 1 && c != x)
		ltr = ' ';
	else
		ltr = 'B';
	ft_putchar(ltr);
}
