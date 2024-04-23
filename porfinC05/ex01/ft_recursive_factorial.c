/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_recursive_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aglinski <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/27 04:23:42 by aglinski          #+#    #+#             */
/*   Updated: 2024/02/27 04:23:48 by aglinski         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
/* #include <stdio.h> */

int	ft_recursive_factorial(int nb)
{
	if (nb < 0)
		return (0);
	if (nb == 0)
		return (1);
	else
	{
		return (nb * (ft_recursive_factorial(nb - 1)));
	}
}

/* int main()
{
int n1 = 5;
int n2 = 0;
int n3 = -3;

	printf("Factorial de %d: %d\n", n1, ft_recursive_factorial(n1));
    printf("Factorial de %d: %d\n", n2, ft_recursive_factorial(n2));
    printf("Factorial de %d: %d\n", n3, ft_recursive_factorial(n3));
	return 0;
} */