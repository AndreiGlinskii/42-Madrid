/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aglinski <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/11 16:15:21 by aglinski          #+#    #+#             */
/*   Updated: 2024/02/12 18:30:43 by aglinski         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_minus(char z)
{
	write(1, &z, 1);
}

void	ft_putchar(char a, char b, char c)
{
	ft_minus(a + 48);
	ft_minus(b + 48);
	ft_minus(c + 48);
	if (a == 7 && b == 8 && c == 9)
	{
		return ;
	}
	ft_minus(',');
	ft_minus(' ');
}

void	ft_print_comb(void)

{
	int	a;
	int	b;
	int	c;

	a = 0;
	while (a <= 7)
	{
		b = a + 1;
		while (b <= 8)
		{
			c = b + 1;
			while (c <= 9)
			{
				ft_putchar(a, b, c);
				c++;
			}
			b++;
		}
		a++;
	}
}
