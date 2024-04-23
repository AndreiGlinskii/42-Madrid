/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aglinski <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/27 05:28:35 by aglinski          #+#    #+#             */
/*   Updated: 2024/02/27 05:28:42 by aglinski         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
/* #include <stdio.h> */

int	ft_iterative_power(int nb, int power)
{
	int	cuadrado;

	cuadrado = 1;
	if (power < 0)
		return (0);
	if (power == 0)
		return (1);
	while (power > 0)
	{
		cuadrado = cuadrado * nb;
		power--;
	}
	return (cuadrado);
}

/* int main()
{
    int base = 2;
    int exponente = 4;
    int resultado;

    resultado = ft_iterative_power(base, exponente);

    printf("%d elevado a la %d es %d\n", base, exponente, resultado);

    return 0;
} */