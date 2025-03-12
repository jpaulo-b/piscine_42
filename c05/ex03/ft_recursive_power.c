/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_recursive_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jpaulo-b <jpaulo-b@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/09 16:58:20 by jpaulo-b          #+#    #+#             */
/*   Updated: 2025/03/09 17:51:59 by jpaulo-b         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_recursive_power(int nb, int power)
{
	if (power == 0)
		return (1);
	if (power < 0)
		return (0);
	return (nb * ft_recursive_power(nb, power - 1));
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
		res = ft_recursive_power(nb, power);
		printf("%d ^ %d = %d\n", nb, power, res);
	}
	return (0);
}*/
