/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jpaulo-b <jpaulo-b@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/05 21:34:48 by jpaulo-b          #+#    #+#             */
/*   Updated: 2025/03/11 17:34:52 by jpaulo-b         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

/* int - 4 bytes; INT_MAX=2147483647; INT_MIN=-2147483648
	unsigned int=4294967295 = 0xffffffff */
void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_putnbr(int nb)
{
	if (nb <= 2147483647 && nb >= -2147483648)
	{
		if (nb == -2147483648)
		{
			write(1, "-2147483648", 11);
			return ;
		}
		if (nb < 0)
		{
			ft_putchar('-');
			nb = nb * -1;
		}
		if (nb > 9)
		{
			ft_putnbr(nb / 10);
			nb %= 10;
		}
		ft_putchar(nb + '0');
	}
	return ;
}

int	main(void)
{
	int		nb;

	nb = 2147483649;
//	nb = -214748;
//	nb = -46542;
	ft_putnbr(nb);
	return (0);
}
