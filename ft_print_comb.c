/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cde-voog <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/19 15:10:43 by cde-voog          #+#    #+#             */
/*   Updated: 2023/01/19 15:11:06 by cde-voog         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include<unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_print_comb_print(int a, int b, int c)
{
	ft_putchar(48 + a);
	ft_putchar(48 + b);
	ft_putchar(48 + c);
	if (!(a == 7 && b == 8 && c == 9))
	{
		write(1, ", ", 2);
	}
}

void	ft_print_comb(void)
{
	int	a;
	int	b;
	int	c;

	a = 0;
	b = 0;
	c = 0;
	while (a < 10)
	{
		b = a + 1;
		while (b < 10)
		{
			c = b + 1;
			while (c < 10)
			{
				ft_print_comb_print(a, b, c);
				c++;
			}
			b++;
		}
		a++;
	}
}
