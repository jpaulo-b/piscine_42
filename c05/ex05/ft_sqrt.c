/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sqrt.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jpaulo-b <jpaulo-b@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/09 18:50:13 by jpaulo-b          #+#    #+#             */
/*   Updated: 2025/03/09 19:23:46 by jpaulo-b         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_sqrt(int nb)
{
	int	x;
	int	y;

	if (nb < 1)
		return (0);
	x = 1;
	while (x <= nb)
	{
		y = x * x;
		if (y == nb)
			return (x);
		else if (y > nb)
			return (0);
		x++;
	}
	return (x);
}
/*
#include <stdio.h>
#include <stdlib.h>

int	main(int ac, char **av)
{
	int	nb;
	int	res;

	if (ac == 2)
	{
		nb = atoi(av[1]);
		res = ft_sqrt(nb);
		printf("sqrt %d = %d\n", nb, res);
	}
	return (0);
}*/
