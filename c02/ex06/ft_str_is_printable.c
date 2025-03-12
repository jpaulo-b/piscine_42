/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_printable.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jpaulo-b <jpaulo-b@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/04 22:00:28 by jpaulo-b          #+#    #+#             */
/*   Updated: 2025/03/04 22:20:16 by jpaulo-b         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_str_is_printable(char *str)
{
	int	i;

	i = 0;
	while (str[i] >= 32 && str[i] <= 126)
		i++;
	if (str[i] == '\0')
		return (1);
	else
		return (0);
}
/*
#include <stdio.h>

int	main(void)
{
	printf("%d\n", ft_str_is_printable(" 1aA~"));
	printf("%d\n", ft_str_is_printable("ñ ć"));
	return (0);
}*/
