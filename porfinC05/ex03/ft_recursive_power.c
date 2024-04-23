/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_recursive_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aglinski <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/27 05:47:36 by aglinski          #+#    #+#             */
/*   Updated: 2024/02/27 05:47:38 by aglinski         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
/* #include <stdio.h> */

int	ft_recursive_power(int nb, int power)
{
	if (power < 0)
		return (0);
	if (power == 0)
		return (1);
	else
		return (nb * (ft_recursive_power(nb, power - 1)));
}

/* int main()
{
	int nb = 2;
	int cua = 3;
	int result;

	result = (ft_recursive_power(nb, cua));
	printf("%d elevado a la %d es %d\n", nb, cua, result);
	return 0;
} */