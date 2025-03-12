/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_numeric.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jpaulo-b <jpaulo-b@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/04 20:32:32 by jpaulo-b          #+#    #+#             */
/*   Updated: 2025/03/04 21:18:22 by jpaulo-b         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_str_is_numeric(char *str)
{
	int	i;

	i = 0;
	while (str[i] >= '0' && str[i] <= '9')
		i++;
	if (str[i] == '\0')
		return (1);
	else
		return (0);
}
/*
#include <stdio.h>

int 	main(void)
{
	printf("%d\n", ft_str_is_numeric("7544"));
	printf("%d\n", ft_str_is_numeric("76ai"));
	printf("%d\n", ft_str_is_numeric(""));
	return (0);
}*/
