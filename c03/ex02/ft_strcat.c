/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcat.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jpaulo-b <jpaulo-b@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/05 12:39:49 by jpaulo-b          #+#    #+#             */
/*   Updated: 2025/03/05 15:33:24 by jpaulo-b         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/* strcat - concatenate 2 strings; dest + src = destsrc  */
char	*ft_strcat(char *dest, char *src)
{
	int	i;
	int	j;

	i = 0;
	j = 0;
	while (dest[i] != '\0')
		i++;
	while (src[j] != '\0')
	{
		dest[i] = src[j];
		i++;
		j++;
	}
	dest[i] = '\0';
	return (dest);
}
/*
#include <stdio.h>
#include <string.h>

int	main(void)
{
	char	dest[30] = "Every little thing ";
	char	src[] = "she does is magic!";
	char	dest1[30] = "Every little thing ";

	printf("%s \n", ft_strcat(dest, src));
	printf("%s \n", strcat(dest1, src));
	return (0);
}*/
