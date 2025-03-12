/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jpaulo-b <jpaulo-b@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/11 18:47:25 by jpaulo-b          #+#    #+#             */
/*   Updated: 2025/03/11 21:11:46 by jpaulo-b         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	*ft_range(int min, int max)
{
	int	*range;
	int	i;

	if (min >= max)
		return (NULL);
	range = malloc((max - min) * sizeof (int));
	if (!range)
		return (NULL);
	i = 0;
	while (i < max - min)
	{
		range[i] = min + i;
		i++;
	}
	return (range);
}


#include <stdio.h>

int	main(void)
{
	int	i;
	//int	min;
	//int	max;
	int	*array = ft_range(1, 4);

	i = 0;
	while (i < 6)
	{
		printf("%d ", array[i]);
		i++;
	}
	/*
	min = 0;
	max = 5;
	printf("range from %d to %d ", min, max);
	i = 0;
	while (i < max)
	{
		printf("%d\t ", ft_range(min, max));
		i++;
	}*/
	return (0);
}
