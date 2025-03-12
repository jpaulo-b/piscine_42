/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_alpha.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jpaulo-b <jpaulo-b@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/04 17:58:21 by jpaulo-b          #+#    #+#             */
/*   Updated: 2025/03/04 20:31:09 by jpaulo-b         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_str_is_alpha(char *str)
{
	int	i;

	i = 0;
	while ((str[i] >= 'A' && str[i] <= 'Z')
		|| (str[i] >= 'a' && str[i] <= 'z'))
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
	printf("%d\n", ft_str_is_alpha("abcdefgh"));
	printf("%d\n", ft_str_is_alpha("a73658&"));
	printf("%d\n", ft_str_is_alpha(""));
	return (0);
}*/
