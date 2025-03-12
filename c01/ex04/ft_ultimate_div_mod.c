/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_div_mod.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jpaulo-b <jpaulo-b@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/01 11:49:10 by jpaulo-b          #+#    #+#             */
/*   Updated: 2025/03/04 17:21:09 by jpaulo-b         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// #include <stdio.h>

void	ft_ultimate_div_mod(int *a, int *b)
{
	int	div;
	int	mod;

	div = *a / *b;
	mod = *a % *b;
	*a = div;
	*b = mod;
}
/*
int main(void)
{
    int x;
    int y;

    x = 7;
    y = 3;
    printf("x = %i; y = %i \n", x, y);

    ft_ultimate_div_mod(&x, &y);
    printf("div = %i e mod = %i \n", x, y);
    return (0);
}
*/
