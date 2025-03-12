/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jpaulo-b <jpaulo-b@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/09 16:11:36 by jpaulo-b          #+#    #+#             */
/*   Updated: 2025/03/09 16:56:18 by jpaulo-b         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_iterative_power(int nb, int power)
{
	int	i;
	int	res;

	i = 1;
	res = 1;
	if (nb == 0 && power == 0)
		return (1);
	if (power < 0 && nb > 0)
		return (0);
	while (i <= power)
	{
		res = res * nb;
		i++;
	}
	return (res);
}

/*
#include <stdio.h>
#include <stdlib.h>

int	main(int ac, char **av)
{
	int	nb;
	int	power;
	int	res;

	if (ac == 3)
	{
		nb = atoi(av[1]);
		power = atoi(av[2]);
		res = ft_iterative_power(nb, power);
		printf("%d powered to %d = %d\n", nb, power, res);
	}
	return (0);
}*/
