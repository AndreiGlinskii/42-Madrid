/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb2.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aglinski <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/11 17:09:33 by aglinski          #+#    #+#             */
/*   Updated: 2024/02/11 17:10:33 by aglinski         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void ft_minus(char z)

{
	write(1, &z, 1);
}

void ft_putchar(char a, char b)

{
	ft_minus(a + 48);
	ft_minus(b + 48);
	if (a == 8 && b == 9)
	{
		return ;
	}
	ft_minus(',');
	ft_minus(' ');
}

void ft_print_comb2(void)
{
	int a;
	int b;

	a = 0;
	while(a <= 9)
	{
		b = a + 1;
		while(b <= 9)
		{
			ft_putchar(a, b);
			b++;
		}
		a++;
	}
}
