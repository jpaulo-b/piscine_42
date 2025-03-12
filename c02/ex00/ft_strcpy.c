/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jpaulo-b <jpaulo-b@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/04 10:21:51 by jpaulo-b          #+#    #+#             */
/*   Updated: 2025/03/04 12:16:00 by jpaulo-b         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strcpy(char *dest, char *src)
{
	int	i;

	i = 0;
	while (src[i] != '\0')
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = '\0';
	return (dest);
}
/*
#include <stdio.h>

int	main(void)
{
	char	src[20] = "Ave Caesar!";
	char	dest[20];

	printf("src = %s\t", src);
	ft_strcpy(dest, src);
	printf("dest = %s\t", dest);
	return (0);
}*/
