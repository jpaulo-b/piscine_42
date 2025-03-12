/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_params.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jpaulo-b <jpaulo-b@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/08 15:20:53 by jpaulo-b          #+#    #+#             */
/*   Updated: 2025/03/11 12:33:53 by jpaulo-b         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
/*  ft_putstr to print chars, one each time  */
int	ft_putchar(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		write(1, &str[i], 1);
		i++;
	}
	write(1, "\n", 1);
	return (0);
}

//  From ac = 1 to ac, it will print inserted params
int	main(int ac, char *av[])
{
	int	i;

	i = 1;
	while (i < ac)
	{
		ft_putchar(av[i]);
		i++;
	}
	return (0);
}
