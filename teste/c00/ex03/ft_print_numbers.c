/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_numbers.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jpaulo-b <jpaulo-b@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/20 16:06:33 by jpaulo-b          #+#    #+#             */
/*   Updated: 2025/03/03 10:37:35 by jpaulo-b         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_print_numbers(void)
{
	int	alg;

	alg = '0';
	while (alg <= '9')
	{
		write (1, &alg, 1);
		alg++;
	}
}
/*
int	main(void)
{
	ft_print_numbers();
	return (0);
}*/
