/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_find_next_prime.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asousa-l <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/25 16:16:15 by asousa-l          #+#    #+#             */
/*   Updated: 2022/01/25 16:50:04 by asousa-l         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_is_prime(int nb)
{
	int	c;

	c = 2;
	if (nb < 2)
		return (0);
	while (c <= nb / 2)
	{
		if (nb % c == 0)
			return (0);
		c++;
	}
	return (1);
}

int	ft_find_next_prime(int nb)
{
	while (nb < 2147483647 && !ft_is_prime(nb))
		nb++;
	return (nb);
}
/*
int	main(void)
{
	printf("-10 = %d (2)\n", ft_find_next_prime(-10));
	printf(" 0 = %d (2)\n", ft_find_next_prime(0));
	printf(" 1 = %d (2)\n", ft_find_next_prime(1));
	printf(" 2 = %d (2)\n", ft_find_next_prime(2));
	printf(" 3 = %d (3)\n", ft_find_next_prime(3));
	printf(" 4 = %d (5)\n", ft_find_next_prime(4));
	printf(" 5 = %d (5)\n", ft_find_next_prime(5));
	printf(" 6 = %d (7)\n", ft_find_next_prime(6));
	printf(" 7 = %d (7)\n", ft_find_next_prime(7));
	printf(" 8 = %d (11)\n", ft_find_next_prime(8));
	printf(" 9 = %d (11)\n", ft_find_next_prime(9));
	printf(" 10 = %d (11)\n", ft_find_next_prime(10));
	printf(" 11 = %d (11)\n", ft_find_next_prime(11));	
}*/