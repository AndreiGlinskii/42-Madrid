/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ft.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aglinski <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/14 12:46:21 by aglinski          #+#    #+#             */
/*   Updated: 2024/02/14 12:46:24 by aglinski         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_ft(int *nbr)
{
	*nbr = 42;
}

/*
int main() 
{
    int number = 0;
    write("Antes de llamar a ft_ft, el valor de number es: %d\n", number);
    ft_ft(&number);
    write("Después de llamar a ft_ft, el valor de number es: %d\n", number);
    return 0;
}*/