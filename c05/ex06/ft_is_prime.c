/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_prime.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jpaulo-b <jpaulo-b@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/09 19:26:24 by jpaulo-b          #+#    #+#             */
/*   Updated: 2025/03/10 21:48:44 by jpaulo-b         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_is_prime(int nb)
{
	int	i;
	int	div;

	i = nb;
	div = 1;
	if (nb <= 1)
		return (0);
	while (i > 2)
	{
		div = (nb) % (i - 1);
		if (div == 0)
			return (0);
		i--;
	}
	return (1);
}
/*
#include <stdio.h>

int	main(void)
{
	int nb;

	nb = 65;

	while (nb-- > -10)
		if (ft_is_prime(nb))
			printf("is_prime(%i) = %i\n", nb, ft_is_prime(nb));
	return (0);
}*/
