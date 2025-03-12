/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jpaulo-b <jpaulo-b@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/05 15:36:10 by jpaulo-b          #+#    #+#             */
/*   Updated: 2025/03/05 17:08:46 by jpaulo-b         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strncat(char *dest, char *src, unsigned int nb)
{
	unsigned int	i;
	unsigned int	j;

	i = 0;
	j = 0;
	while (dest[i] != '\0')
		i++;
	while (src[j] != '\0' && j < nb)
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
	unsigned int	size_str = 5;

	printf("%s \n", ft_strncat(dest, src, size_str));
	printf("%s \n", strncat(dest1, src, size_str));
	return (0);
}*/
