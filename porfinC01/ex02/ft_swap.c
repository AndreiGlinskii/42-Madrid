/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_swap.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aglinski <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/14 13:38:41 by aglinski          #+#    #+#             */
/*   Updated: 2024/02/14 13:38:43 by aglinski         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_swap(int *a, int *b)
{
	int	c;

	c = *a;
	*a = *b;
	*b = c;
}

/*
int main()
{
    int x = 10;
    int y = 20;

    write("Antes del intercambio: x = %d, y = %d\n", x, y);
    ft_swap(&x, &y);
    write("Después del intercambio: x = %d, y = %d\n", x, y);

    return 0;
}*/