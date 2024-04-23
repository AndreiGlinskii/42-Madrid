/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb2.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aglinski <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/11 17:09:33 by aglinski          #+#    #+#             */
/*   Updated: 2024/02/29 16:39:52 by aglinski         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_minus(char c)

{
	write(1, &c, 1);
}

void	ft_print_comb2(void)
{
	int	a;
	int	b;

	a = 0;
	while (a <= 98)
	{	
	   b = a + 1;
	while (b <= 99)	
	{
		ft_minus((a / 10) + '0');
		ft_minus((a % 10) + '0');
		ft_minus(' ');
		ft_minus((b / 10) + '0');
		ft_minus((b % 10) + '0');
		if (!(a == 98 && b == 99))
		{
			write(1, ", ", 2);
		}
		b++;
	}
	a++;
}
}

/* int main(void)
{
	ft_print_comb2();
	return 0;
}
*/