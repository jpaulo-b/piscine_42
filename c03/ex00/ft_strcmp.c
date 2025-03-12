/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jpaulo-b <jpaulo-b@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/05 10:55:00 by jpaulo-b          #+#    #+#             */
/*   Updated: 2025/03/05 11:54:52 by jpaulo-b         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/* ft_strcmp compares s1[] and s2[]. s1=s2 ret 0, s1>s2 ret>0, s1<s2 ret<0 */
int	ft_strcmp(char *s1, char *s2)
{
	int	i;

	i = 0;
	while (s1[i] != '\0' && s2[i] != '\0' && s1[i] == s2[i])
		i++;
	return (s1[i] - s2[i]);
}
/*
#include <stdio.h>
#include <string.h>

int	main(void)
{
	char	str1[] = "42 portoo";
	char	str2[] = "42 porto";
	printf("Result: %d \n", ft_strcmp(str1, str2));
	printf("Res. strcmp: %d \n", strcmp(str1, str2));
	return (0);
}*/
