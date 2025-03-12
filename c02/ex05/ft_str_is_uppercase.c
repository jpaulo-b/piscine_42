/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_uppercase.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jpaulo-b <jpaulo-b@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/04 21:45:11 by jpaulo-b          #+#    #+#             */
/*   Updated: 2025/03/04 21:55:07 by jpaulo-b         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_str_is_uppercase(char *str)
{
	int	i;

	i = 0;
	while (str[i] >= 'A' && str[i] <= 'Z')
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
	printf("%d\n", ft_str_is_uppercase("ABC"));
	printf("%d\n", ft_str_is_uppercase("abc56"));
	printf("%d\n", ft_str_is_uppercase(""));
	return (0);
}*/
