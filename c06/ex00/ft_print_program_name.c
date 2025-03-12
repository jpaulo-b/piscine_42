/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_program_name.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jpaulo-b <jpaulo-b@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/08 12:41:30 by jpaulo-b          #+#    #+#             */
/*   Updated: 2025/03/11 12:03:29 by jpaulo-b         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/* Program that shows its own name, followed by a new line  */
#include <unistd.h>

/*
int	main(int ac, char *av[])
{
	(void) ac;
	write(1, &(*av)[0], 7);
	write(1, "\n", 1);
}*/

int	main(int ac, char *av[])
{
	int	i;

	(void) ac;
	i = 0;
	while ((*av)[i] != '\0')
	{
		write(1, &(*av)[i], 1);
		i++;
	}
	write(1, "\n", 1);
}
