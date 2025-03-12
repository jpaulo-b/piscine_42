/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush01.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jpaulo-b <jpaulo-b@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/23 12:06:59 by jpaulo-b          #+#    #+#             */
/*   Updated: 2025/02/23 19:16:29 by jpaulo-b         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char ltr);

void	ft_print(int x, int y, int c, int l);

/* c -- column counter -x */
/* l -- line counter -y */
int	rush01(int x, int y)
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
		ltr = '/';
	else if ((c == x && l == 1) || (c == 1 && l == y))
		ltr = '\\';
	else if (l != 1 && l != y && c != 1 && c != x)
		ltr = ' ';
	else
		ltr = '*';
	ft_putchar(ltr);
}
