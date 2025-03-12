/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jpaulo-b <jpaulo-b@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/06 13:22:14 by jpaulo-b          #+#    #+#             */
/*   Updated: 2025/03/08 12:30:32 by jpaulo-b         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/* ft receives a string with funny chars likes spaces, tabs, ...
	all to discard; then it catches '-' and counts them: even - positive
	odd - negative; then catches numbers 'til it finds other chars; 
	prints signal(sign) and number; discard all other chars */
int	ft_atoi(char *str)
{
	int	i;
	int	res;
	int	sign;

	i = 0;
	res = 0;
	sign = 1;
	while (str[i] == ' ' || str[i] == '\n' || str[i] == '\t'
		|| str[i] == '\v' || str[i] == '\f' || str[i] == '\r')
		i++;
	while (str[i] == '+' || str[i] == '-')
	{
		if (str[i] == '-')
			sign = (-1) * sign;
		i++;
	}
	while (str[i] >= '0' && str[i] <= '9')
	{
		res = res * 10 + (str[i] - '0');
		i++;
	}
	return (res * sign);
}
/*
#include <stdio.h>
#include <stdlib.h>

int	main(void)
{
	printf("ft_atoi vs atoi\n");
	printf("%d vs", ft_atoi("-2468"));
	printf(" %d\n", atoi("-2468"));
	printf("%d vs", ft_atoi("  ---+--+1234ab567"));
	printf(" %d\n", atoi("  +-1234ab567"));
	return (0);
}*/
