/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_div_mod.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jpaulo-b <jpaulo-b@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/27 20:23:18 by jpaulo-b          #+#    #+#             */
/*   Updated: 2025/03/04 17:15:21 by jpaulo-b         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_div_mod(int a, int b, int *div, int *mod)
{
	*div = a / b;
	*mod = a % b;
}
/*
#include <stdio.h>

int	main(void)
{
	int	a;
	int	b;
	int	x;
	int	y;
	int	*div;
	int	*mod;

	a = 5;
	b = 2;
	div = &x;
	mod = &y;
	ft_div_mod(a, b, div, mod);
	printf("a = %d e b = %d \n", a, b);
	printf("div = %d e mod = %d \n", *div, *mod);
	return (0);
}*/
