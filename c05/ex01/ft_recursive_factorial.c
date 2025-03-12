/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_recursive_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jpaulo-b <jpaulo-b@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/09 14:30:16 by jpaulo-b          #+#    #+#             */
/*   Updated: 2025/03/09 16:02:25 by jpaulo-b         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_recursive_factorial(int nb)
{
	if (nb < 0)
		return (0);
	if (nb < 1)
		return (1);
	if (nb >= 1)
		return (nb * ft_recursive_factorial(nb - 1));
	return (0);
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
		res = ft_recursive_factorial(nb);
		printf("nb = %d,\tfact = %d\n", nb, res);
	}
	return (0);
}*/
