/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jpaulo-b <jpaulo-b@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/09 11:03:42 by jpaulo-b          #+#    #+#             */
/*   Updated: 2025/03/09 14:27:57 by jpaulo-b         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_iterative_factorial(int nb)
{
	int	i;
	int	res;

	i = nb;
	res = 1;
	if (i < 0)
		return (0);
	if (i == 0)
	{
		res = 1;
		return (res);
	}
	while (i > 0)
	{
		res = res * i;
		i--;
	}
	return (res);
}
/*
#include <stdio.h>
#include <stdlib.h>

//  It works until factorial 12. Above that, the result is truncated
int	main(int ac, char *av[])
{
	int	nb;
	int	res;

	if (ac == 2)
	{
		nb = atoi(av[1]);
		res = ft_iterative_factorial(nb);
		printf("nb = %d,\tfact = %d\n", nb, res);
	}
	return (0);
}*/
