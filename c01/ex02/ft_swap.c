/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_swap.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jpaulo-b <jpaulo-b@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/27 18:36:39 by jpaulo-b          #+#    #+#             */
/*   Updated: 2025/03/04 17:14:00 by jpaulo-b         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_swap(int *a, int *b)
{
	int	temp;

	temp = *a;
	*a = *b;
	*b = temp;
}
/*
#include <stdio.h>

int	main(void)
{
	int	*a;
	int	*b;
	int	x;
	int	y;

	a = &x;
	b = &y;
	*a = 10;
	*b = 20;
	printf("a = %i e b = %i \n", *a, *b);
	ft_swap(a, b);
	printf("after ft_swap... \n");
	printf("a = %i e b = %i \n", *a, *b);
	return (0);
}*/
